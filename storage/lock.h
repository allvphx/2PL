//
// Created by pan on 25/5/21.
//

#ifndef ENCODINGS_LOCK_H
#define ENCODINGS_LOCK_H

#include "mutex"
#include "set"
#include "queue"
#include <shared_mutex>

class Locked_item {    // a thread safe 2PL
    std::shared_timed_mutex lock;
    int value;

public:
    // Non-transactional control.
    int Get(int TID) {
        lock.lock_shared();
        int res = value;
        lock.unlock_shared();
        return res;
    }

    // Non-transactional control.
    void Set(int TID, int val) {
        lock.lock();
        value = val;
        lock.unlock();
    }
};

#endif //ENCODINGS_LOCK_H
