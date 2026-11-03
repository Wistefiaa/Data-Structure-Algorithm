#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  std::vector<bool> want_delete(mSize, false);
  for (int p : pos) {
    want_delete[p] = true;
  }

  size_t write_idx = 0;
  for(size_t read_idx = 0; read_idx < mSize; ++read_idx){
    if(!want_delete[read_idx]){
      mData[write_idx++] = mData[read_idx];
    }
  }
  mSize = write_idx;
}

#endif
