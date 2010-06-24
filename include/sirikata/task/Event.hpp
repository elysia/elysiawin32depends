/*  Sirikata Kernel -- Task scheduling system
 *  Event.hpp
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

#ifndef SIRIKATA_Event_HPP__
#define SIRIKATA_Event_HPP__

#include "HashMap.hpp"

namespace Sirikata {

/*
 * Event.hpp -- Event and IdPair classes, to be used in EventManager.
 */
namespace Task {

/**
 * An ID specifying the most useful identifying information for an Event.
 * Specifically, a Primary ID, which is one of a set of compile-time
 * constants, which specify the type of event that is being fired; and,
 * a Secondary ID, which should contain a specific pointer or string value
 * identifying the specific instance of the thrown event.
 */
class SIRIKATA_EXPORT IdPair {
public:
	/** The Secondary ID should attempt to specify the specific type of
	 * event (specific enough to prevent a large number of listeners,
	 * and generic enough not to force interested listeners to specify
	 * only a Primary ID. Usually something like a filename string or
	 * UUID, however the pointer is allowed to be anything. */
	class SIRIKATA_EXPORT Secondary {
	public:
		/** Pointers passed into the constructor should be cast to
		 * an intptr_t when passed to the constructor. */
		typedef intptr_t IntType;
	private:
		intptr_t mIntValue;
		std::string mStrValue;
	public:

		/** Creates a Secondary ID with an integer or pointer value
		 * and an empty string (so will not be equal to a non-empty
		 * string Secondary ID).  Note that Secondary::null(),
		 * Secondary(0) and Secondary("") are equal. */
		Secondary(intptr_t i) : mIntValue(i) {}

		/**
		 * Create a Secondary ID from a string.  This will first
		 * compute the hash and store that in the integer value,
		 * and then store the string in mStrValue. Note that an empty
		 * string is equal to Secondary(0) or Secondary::null(). */

		Secondary(const std::string &str) :
                mIntValue(str.empty() ? 0 : std::tr1::hash<std::string>()(str)),
				mStrValue(str) {}
        /**
		 * Create a Secondary ID from a string and an integer.  This will first
		 * compute the hash and store that in the integer value,
		 * and then store the string in mStrValue. Note that an empty
		 * string is equal to Secondary(0) or Secondary::null(). */

        Secondary(const std::string&str,
                  intptr_t i):mIntValue(i),mStrValue(str) {}
		/**
		 * Displays string value (up to 60 chars), or integer
		 * value if the string is empty.
		 */
		inline friend std::ostream& operator << (
				std::ostream &os,
				const Secondary &id) {
			if (id.mStrValue.empty()) {
				if (id.mIntValue == 0) {
					os << "null";
				} else {
					os << id.mIntValue;
				}
			} else {
				if (id.mStrValue.size() > 60) {
					os << '\"' << id.mStrValue.substr(57) << "\"...";
				} else {
					os << '\"' << id.mStrValue << '\"';
				}
			}
			return os;
		}

		/// Equality comparison
		inline bool operator== (const Secondary &otherId) const {
			return (mIntValue == otherId.mIntValue &&
					mStrValue == otherId.mStrValue);
		}
		/// Ordering comparison
		inline bool operator< (const Secondary &otherId) const {
			if (mIntValue == otherId.mIntValue) {
				return (mStrValue < otherId.mStrValue);
			} else {
				return (mIntValue < otherId.mIntValue);
			}
		}

		/** Create a null secondary ID in the rare case that having one
		 * is not applicable. */
		static inline Secondary null() {
			return Secondary(0);
		}

		/// Hasher functor to be used in a hash_map.
		struct Hasher {
			size_t operator() (const Secondary &sec) const{
				return std::tr1::hash<intptr_t>()(sec.mIntValue); // mIntValue is already hashed.

				/*return std::tr1::hash<std::string>()(sec.mStrValue) * 37 +
					std::tr1::hash<intptr_t>()(sec.mIntValue) * 31;*/
			}
		};
	};

	/** One of a set of constant string values identifying the type of event.
	 * Generally, if an event requires a dynamic_cast to the correct
	 * subclass of Event, that event should have a different Primary ID.
	 * However, the primary ID should not be generated during execution,
	 * since each new ID requires adding another member to the internal
	 * mapping from string to integer. */
	class SIRIKATA_EXPORT Primary {
	private:
		int mId;
		static int getUniqueId(const std::string &id);
	public:
		/** Lookup the eventName in the internal static map (and create
		 * an entry if one does not yet exist) */
		Primary(const std::string &eventName);
		Primary(const char *eventName);

                /// Returns this ID in string form.
                std::string toString () const;

		/// Displays the string version of primary ID.
		inline friend std::ostream& operator << (
						std::ostream &os,
						const Primary &id) {
			return os << id.toString();
		}

		/// Ordering comparison
		inline bool operator< (const Primary &other) const {
			return mId < other.mId;
		}
		/// Equality comparison
		inline bool operator== (const Primary &other) const {
			return mId == other.mId;
		}

		/// Trivial hasher functor to be used in a hash_map.
		struct Hasher {
			size_t operator() (const Primary &pri) const{
				return pri.mId;
			}
		};
	};

	/// Public Primary key.
	Primary mPriId;
	/// Public Secondary key.
	Secondary mSecId;

        const Primary& primary() const {
            return mPriId;
        }

        const Secondary& secondary() const {
            return mSecId;
        }

	/// Prints out an ID -- Use for debugging only.
	inline friend std::ostream& operator << (
				std::ostream &os,
				const IdPair &id) {
		return os << "<ID:" << id.mPriId << "; " << id.mSecId << '>';
	}
	inline std::string toString() const {
	       std::ostringstream os;
	       os << *this;
	       return os.str();
	}

	explicit IdPair(const Primary &pri)
		: mPriId(pri), mSecId(Secondary::null()) {
	}

	/// Create based on an already existing Primary and Secondary ID.
	IdPair(const Primary &pri, const Secondary &sec)
		: mPriId(pri), mSecId(sec) {
	}
	/// Create a (string, string) ID.
	IdPair(const std::string &pri, const std::string &sec)
		: mPriId(pri), mSecId(sec) {
	}
	/// Create a (string, integer) or (string, pointer) ID.
	IdPair(const std::string &pri, Secondary::IntType sec)
		: mPriId(pri), mSecId(sec) {
	}

	/// Compare both primary and secondary ID for equality.
	inline bool operator== (const IdPair &other) const {
		return (mPriId == other.mPriId) &&
			(mSecId == other.mSecId);
	}

	/// Compare both primary and secondary ID for ordering.
	inline bool operator< (const IdPair &other) const {
		if (mPriId == other.mPriId) {
			return (mSecId < other.mSecId);
		} else {
			return (mPriId < other.mPriId);
		}
	}
};

enum EventHistory {
    EVENT_CANCELED=0,
    EVENT_HANDLED=1,
    EVENT_UNHANDLED=2
};

/** Base class for any events that are to be thrown */
class SIRIKATA_EXPORT Event {
protected:
	/**
	 * a IdPair used to determine which EventListeners are interested:
	 * The PrimaryId must not be an empty string, and should be one of a
	 * predefined set of strings for efficiency reasons.
	 *
	 * Most events should have a SecondaryId (string, pointer, or number)
	 * which identifies it, however in a few cases the secondary ID does not make
	 * sense, in which case it should be @c IdPair::Secondary::null()
	 */
	const IdPair mId;
public:
	/// Base class constructor takes in a constant IdPair.
	Event(const IdPair &id)
		: mId(id) {
	}

	/** Most subclasses will use aditional members, free them properly. */
	virtual ~Event() {}
    /** Call this after all listeners have received their messages
        Can be used for additional compute on the event, or to remove it */
    virtual void operator() (EventHistory);
	/// Returns the IdPair to compare for equality.
	inline const IdPair &getId () const {
		return mId;
	}
};
typedef std::tr1::shared_ptr<Event> EventPtr;

}
}

#endif
