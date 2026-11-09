#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
  size_t target_idx = (mFront + pos) % mCap;
  T temp = mData[target_idx];
  for (size_t i = pos; i < mSize - 1; ++i) {
      size_t current = (mFront + i) % mCap;
      size_t next = (mFront + i + 1) % mCap;
      mData[current] = mData[next];
    }
  size_t back_idx = (mFront + mSize - 1) % mCap;
  mData[back_idx] = temp;
}

#endif
