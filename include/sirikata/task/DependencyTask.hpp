/*  Sirikata Kernel -- Task scheduling system
 *  DependencyTask.hpp
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

#ifndef SIRIKATA_Scheduler_HPP__
#define SIRIKATA_Scheduler_HPP__

#include "Time.hpp"
#include "util/AtomicTypes.hpp"
#include "util/LockFreeQueue.hpp"

namespace Sirikata {
namespace Task {

class WorkQueue;

/// Scheduler interface
class SIRIKATA_EXPORT DependentTask {
	WorkQueue *mWorkQueue;
    LockFreeQueue <DependentTask*>mDependents;
    AtomicValue<int> mNumThisWaitingOn;
    bool mFailure;

    class CallFailed;
    friend class CallFailed;
    class CallSuccess;
    friend class CallSuccess;
public:
    DependentTask(WorkQueue *q);
    virtual ~DependentTask();
    void addDepender(DependentTask*);
    void finish(bool success);
    virtual void operator() () = 0;
    ///checks if mNumWaitingOn is 0 and if so sets the event in motion
    void go();

};

}
}

#endif
