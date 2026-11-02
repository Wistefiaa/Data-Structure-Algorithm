#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n, m, k, p, in;
    cin>>n>>m>>k;
    vector<int> numbers;
    for(int i=0; i<n; ++i){
        cin>>in;
        numbers.push_back(in);
    }
    sort(numbers.begin(), numbers.end());
    for(int i=0; i<m; ++i){
        cin>>p;
        auto low = lower_bound(numbers.begin(), numbers.end(), p-k);
        auto high = lower_bound(numbers.begin(), numbers.end(), p+k+1);
        cout<<high-low<<' ';
    }
}