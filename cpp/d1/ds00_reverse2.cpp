#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v,vector<int>::iterator a,vector<int>::iterator b) {
    /*vector<int> temp;
    for(auto i=v.begin(); i<a; ++i){
        temp.push_back(*i);
    }
    for(auto i=b-1; i>=a; --i){
        temp.push_back(*i);
    }
    for(auto i=b; i<v.end(); ++i){
        temp.push_back(*i);
    }
    v = temp;*/
    auto left = a;
    auto right = --b;
    while(left<right){
        swap(*left, *right); // O(n)
        left++;
        right--;
    }
}
int main() {
//read input
int n,a,b;
cin >> n;
vector<int> v;
for (int i = 0;i < n;i++) {
int c;
cin >> c;
v.push_back(c);
}
cin >> a >> b;
//call function
reverse(v,v.begin()+a,v.begin()+b+1);
//display content of the vector
for (auto &x : v) {
cout << x << " ";
}
cout << endl;
}