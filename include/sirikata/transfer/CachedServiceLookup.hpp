/*  Sirikata Transfer -- Content Distribution Network
 *  CachedServiceLookup.hpp
 *
 *  Copyright (c) 2009, Patrick Reiter Horn
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
/*  Created on: Feb 8, 2009 */

#ifndef SIRIKATA_CachedServiceLookup_HPP__
#define SIRIKATA_CachedServiceLookup_HPP__

#include <boost/thread.hpp>
#include <boost/thread/shared_mutex.hpp>
#include <boost/thread/mutex.hpp>
#include "ServiceLookup.hpp"

namespace Sirikata {
namespace Transfer {

/** A ServiceLookup that keeps a local cache. This cache might not be
 * written to disk--it makes more sense to be in the options system.
 *
 * Currently, you can use addToCache to fill the cache.
 */
class CachedServiceLookup : public ServiceLookup {
	typedef std::map<URIContext, std::pair<int, ListOfServicesPtr> > ServiceMap;
	ServiceMap mLookupCache;
	boost::shared_mutex mMut;

	class CachedServiceIterator : public ServiceIterator {
		unsigned int mCurrentService;
		unsigned int mIteration;
		ListOfServicesPtr mServicesList;
		std::string mMergePath;
		CachedServiceLookup *mCache;
	public:
		virtual bool tryNext(ErrorType reason, URI &uri, ServiceParams &outParams) {
			unsigned int length = mServicesList->size();
			if (++mIteration > length) {
				delete this;
				return false;
			}
			mCurrentService %= length;
			outParams = (*mServicesList)[mCurrentService].second;
			relocate(uri, outParams, (*mServicesList)[mCurrentService].first, mMergePath);
			mCurrentService++;
			return true;
		}

		CachedServiceIterator(CachedServiceLookup *parent,
				unsigned int num,
				const ListOfServicesPtr &services,
				const std::string &mergePath)
			: mCurrentService(num), mIteration(0), mServicesList(services), mMergePath(mergePath), mCache(parent) {
            mCurrentService=0;      /// make sure we always do 0 first
		}

		virtual ~CachedServiceIterator() {
		}

		/** Notification that the download was successful.
		 * This may help ServiceLookup to pick a better service next time.
		 */
		virtual void finished(ErrorType reason=SUCCESS) {
            /// don't store last successful server -- always start at top of list in cdn.txt
            /*
			if (reason == SUCCESS) {
				boost::shared_lock<boost::shared_mutex> lookuplock(mCache->mMut);
				ServiceMap::iterator iter = mCache->mLookupCache.find(origContext);
				if (iter != mCache->mLookupCache.end()) {
					(*iter).second.first = mCurrentService-1;
				}
			}
            */
			delete this;
		}
	};

public:
	virtual void addToCache(const URIContext &origService, const ListOfServicesPtr &toCache, const std::string &mergePath=std::string(), const Callback &cb=Callback()) {
		{
			boost::unique_lock<boost::shared_mutex> insertlock(mMut);
			mLookupCache.insert(ServiceMap::value_type(origService,
				std::pair<int, ListOfServicesPtr>(0, toCache)));
		}
		if (cb) {
			cb(new CachedServiceIterator(this, 0, toCache, mergePath));
		}
		ServiceLookup::addToCache(origService, toCache, mergePath);
	}

	virtual void doLookupService(const URIContext &context, const std::string &merge, const Callback &cb, ServiceLookup *retry) {
		ListOfServicesPtr found;
		int num = 0;
		{
			boost::shared_lock<boost::shared_mutex> lookuplock(mMut);
			ServiceMap::const_iterator iter = mLookupCache.find(context);
			if (iter != mLookupCache.end()) {
				found = (*iter).second.second;
				num = (*iter).second.first;
			}
		}
		if (found) {
			ServiceLookup::addToCache(context, found, merge);
			cb(new CachedServiceIterator(this, num, found, merge));
		} else {
			ServiceLookup::doLookupService(context, merge, cb, retry);
		}
	}
};

}
}

#endif /* SIRIKATA_CachedServiceLookup_HPP__ */
