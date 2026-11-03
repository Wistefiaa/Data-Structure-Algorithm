#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  vector<int> temp;
  size_t count = last-first;
  if(count == 0) return;
  size_t pos = position - begin();

  ensureCapacity(mSize+count);
  for(size_t i = mSize; i>pos; --i){
    mData[i + count - 1] = mData[i - 1]; // เลื่อนไปฝั่งขวา
  }
  iterator src = first;
  size_t dest = pos;
  while(src!=last){
    mData[dest] = *src;
    ++src;
    ++dest;
  }
  mSize+=count;
}

#endif
