#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include <vector>
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b){
    vector<T> tData;
    int idx = 0;
    while(idx<=b){
        tData.push_back(top());
        if(idx>=a&&idx<=b){
            tData.push_back(top());
        }
        pop();
        idx++;
    }
    size_t temp_size = tData.size();
    for(int i = temp_size-1; i>=0; i--){
        push(tData[i]);
    }
}

#endif