#include<bits/stdc++.h>
using namespace std;
int main(){
    int N, in;
    cin>>N;
    set<int> s;
    for(int i=0; i<N; i++){
        cin>>in;
        if(in>0&&in<=N){
            s.insert(in);
        }
    }
    if(s.size()!=N) cout<<"NO";
    else cout<<"YES";
}