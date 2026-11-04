#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M, IN_Y, IN_M;
    cin>>N>>M;
    vector<pair<int, int>> data(N);
    for(int i=0; i<N; ++i){
        cin>>data[i].first>>data[i].second;
    }
    sort(data.begin(), data.end());
    for(int i=0; i<M; ++i){
        cin>>IN_Y>>IN_M;
        auto it = lower_bound(data.begin(), data.end(), make_pair(IN_Y, IN_M));

        if(it!=data.end() && *it == make_pair(IN_Y, IN_M)){
            cout<<"0 0 ";
        }
        else if(it == data.begin()){
            cout<<"-1 -1 ";
        }
        else{
            --it;
            cout<<it->first<<' '<<it->second<<' ';
        }
    }
    
    return 0;
}