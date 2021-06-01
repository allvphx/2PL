//
// Created by pan on 1/6/21.
//

#ifndef INC_2PL_STORAGE_H
#define INC_2PL_STORAGE_H

#include "lock.h"

class Storage {
    static const int len = 10000;
    Locked_item arr[len];   // can be changed into var length array.

public:
    void init() {}

    void Get(int TID, int key, int &val) {
        val = arr[key].Get(TID);
    }

    void Set(int TID, int key, int val) {
        arr[key].Set(TID, val);
    }
};


#endif //INC_2PL_STORAGE_H
