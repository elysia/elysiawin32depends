/*  Sirikata Transfer -- Content Transfer management system
 *  DiskCacheLayer.hpp
 *
 *  Copyright (c) 2008, Patrick Reiter Horn
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are
 *  met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of Sirikata nor the names of its contributors may
 *    be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
 * OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/*  Created on: Jan 1, 2009 */

#ifndef SIRIKATA_DiskCacheLayer_HPP__
#define SIRIKATA_DiskCacheLayer_HPP__

#include <sys/stat.h>
#include <sys/types.h>

#include "CacheLayer.hpp"
#include "CacheMap.hpp"
#include "util/ThreadSafeQueue.hpp"
#include "util/Thread.hpp"

namespace Sirikata {
namespace Transfer {

// should really be a config option.
//#define NUM_WORKER_THREADS 10


/// Disk Cache keeps track of what files are on disk, and manages a helper thread to retrieve it.
class SIRIKATA_EXPORT DiskCacheLayer : public CacheLayer {
public:
	struct CacheData : public CacheEntry {
		RangeList mRanges;
		bool wholeFile() const {
			return mRanges.empty();
		}
		bool contains(const Range &range) const {
			if (wholeFile()) {
				return true;
			}
			return range.isContainedBy(mRanges);
		}
	};

private:

	struct DiskRequest;
	ThreadSafeQueue<std::tr1::shared_ptr<DiskRequest> > mRequestQueue; // must be initialized before the thread.
	Thread *mWorkerThread;

	CacheMap mFiles;


	std::string mPrefix; // directory or prefix name with trailing slash.

	struct DiskRequest {
		enum Operation {OPREAD, OPWRITE, OPDELETE, OPEXIT} op;

		DiskRequest(Operation op, const RemoteFileId &myURI, const Range &myRange)
			:op(op), fileId(myURI), toRead(myRange) {}

		RemoteFileId fileId;
		Range toRead;
		TransferCallback finished;
		DenseDataPtr data; // if NULL, read data.

	};

	boost::mutex destroyLock;
	boost::condition_variable destroyCV;
	bool mCleaningUp; // do not delete any files.

public:
	void workerThread(); // defined in DiskCache.cpp
	void unserialize(); // defined in DiskCache.cpp

	void readDataFromDisk(const RemoteFileId &fileURI,
			const Range &requestedRange,
			const TransferCallback&callback) {
		std::tr1::shared_ptr<DiskRequest> req (
				new DiskRequest(DiskRequest::OPREAD, fileURI, requestedRange));
		req->finished = callback;

		mRequestQueue.push(req);
	}

	void serializeRanges(const RangeList &list, std::string &out) {
		std::ostringstream outs;

		for (RangeList::const_iterator liter = list.begin(); liter != list.end(); ++liter) {
			cache_ssize_type len = (cache_ssize_type)((*liter).length());
			if ((*liter).goesToEndOfFile()) {
				len = -len;
			}
			outs << (*liter).startbyte() << " " << len << "; ";
		}
		out = outs.str();
	}

	void unserializeRanges(RangeList &rlist, std::istream &iranges) {
		while (iranges.good()) {
			Range::base_type start = 0;
			cache_ssize_type length = 0;
			bool toEndOfFile = false;
			iranges >> start >> length;

			if (length == 0) {
				continue;
			}
			if (length < 0) {
				length = -length;
				toEndOfFile = true;
			}

			Range toAdd (start, length, LENGTH, toEndOfFile);

			toAdd.addToList(toAdd, rlist);

			char c;
			iranges >> c;
		}
	}

protected:
	virtual void populateCache(const Fingerprint& fileId, const DenseDataPtr &data) {
		std::tr1::shared_ptr<DiskRequest> req (
				new DiskRequest(DiskRequest::OPWRITE, RemoteFileId(fileId, URI(URIContext(),"")), *data));
		req->data = data;

		mRequestQueue.push(req);

		CacheLayer::populateParentCaches(req->fileId.fingerprint(), data);
	}

	virtual void destroyCacheEntry(const Fingerprint &fileId, CacheEntry *cacheLayerData, cache_usize_type releaseSize) {
		if (!mCleaningUp) {
			// don't want to erase the disk cache when exiting the program.
			std::string fileName = fileId.convertToHexString();
			std::tr1::shared_ptr<DiskRequest> req
				(new DiskRequest(DiskRequest::OPDELETE, RemoteFileId(fileId, URI(URIContext(),"")), Range(true)));
		}
		CacheData *toDelete = static_cast<CacheData*>(cacheLayerData);
		delete toDelete;
	}

public:

	DiskCacheLayer(CachePolicy *policy, const std::string &prefix, CacheLayer *tryNext)
			: CacheLayer(tryNext),
			mFiles(NULL, policy),
			mPrefix(prefix+"/"),
			mCleaningUp(false) {
		mFiles.setOwner(this);
		mWorkerThread=new Thread(std::tr1::bind(&DiskCacheLayer::workerThread, this));
		try {
			unserialize();
		} catch (...) {
			SILOG(transfer,fatal,"ERROR loading file list!");
			/// do nothing
		}
	}

	virtual ~DiskCacheLayer() {
		std::tr1::shared_ptr<DiskRequest> req
			(new DiskRequest(DiskRequest::OPEXIT, RemoteFileId(Fingerprint(), URI(URIContext(),"")), Range(true)));
		boost::unique_lock<boost::mutex> sleep_cv(destroyLock);
		mRequestQueue.push(req);
		destroyCV.wait(sleep_cv); // we know the thread has terminated.

		mCleaningUp = true; // don't allow destroyCacheEntry to delete files.
		delete mWorkerThread;
	}

	virtual void purgeFromCache(const Fingerprint &fileId) {
		CacheMap::write_iterator iter(mFiles);
		if (iter.find(fileId)) {
			iter.erase();
		}
		CacheLayer::purgeFromCache(fileId);
	}

	virtual void getData(const RemoteFileId &fileId,
			const Range &requestedRange,
			const TransferCallback&callback) {
		bool haveRange = false;
		{
			CacheMap::read_iterator iter(mFiles);

			if (iter.find(fileId.fingerprint())) {
				const CacheData *rlist = static_cast<const CacheData*>(*iter);
				haveRange = rlist->contains(requestedRange);
			}
			if (haveRange) {
				iter.use(); // or is it more proper to use() after reading from disk?
			}
		}
		if (haveRange) {
			readDataFromDisk(fileId, requestedRange, callback);
		} else {
			CacheLayer::getData(fileId, requestedRange, callback);
		}
	}
};

}
}


#endif /* SIRIKATA_DiskCache_HPP__ */
