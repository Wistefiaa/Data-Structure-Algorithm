#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  vector<int> temp;
  for(auto i=begin(); i<first; ++i){
    temp.push_back(mData[i]);
  }
  for(int i=first; i<last; ++i){
    temp.push_back(mData[i]);
  }
  for(int i=last; i<end(); ++i){
    temp.push_back(mData[i]);
  }
  *this = temp;
}

#endif
