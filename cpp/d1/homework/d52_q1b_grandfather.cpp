#include<bits/stdc++.h>
using namespace std;
map<long long, long long> child;
long long getParent(long long u){
    auto itr = child.find(u);
    if(itr!=child.end()) return itr->second;
    else return -1;
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    long long N, M, F, S, A, B;
    cin>>N>>M;
    for(int i=0; i<N; ++i){
        cin>>F>>S;
        child[S] = F;
    }
    for(int i=0; i<M; ++i){
        cin>>A>>B;
        if(A==B){
            cout<<"NO\n";
            continue;
        }
        long long pA = getParent(A);
        long long pB = getParent(B);
        if(pA==-1||pB==-1){
            cout<<"NO\n";
        }
        else{
            long long gpA = getParent(pA);
            long long gpB = getParent(pB);
            if(gpA==gpB&&gpA!=-1&&gpB!=-1){
                cout<<"YES\n";
            }
            else cout<<"NO\n";
        }
    }
}