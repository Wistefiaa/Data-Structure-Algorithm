#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, K, V;
    cin>>N>>K>>V;
    list<int> beads;
    for(int i=0; i<N; ++i){
        int x;
        cin>>x;
        beads.push_back(x);
    }   
    auto it = beads.begin();
    for(int i=0 ; i<K; i++) it++;

    auto check = beads.insert(it, V);

    while(beads.size()>= 3){
        if(check == beads.end()){
            if(beads.empty()) break;
            check = prev(beads.end());
        }
        int color = *check;

        auto left = check;
        while(left!=beads.begin()){
            auto prevIt = prev(left);
            if(*prevIt == color) left = prevIt;
            else break;
        }

        auto right = check;

        while(right!=beads.end()){
            auto nextIt = next(right);
            if(*nextIt == color && nextIt != beads.end()) right = nextIt;
            else break;
        }

        int count = 0;
        for(auto it = left; it!=next(right); ++it) count++;

        if(count>=3){
            bool Atbegin = (left==beads.begin());
            auto nextPos = beads.erase(left, next(right));
            if(beads.empty()) break;
            else if(Atbegin){
                check = beads.begin();
            }
            else if(nextPos != beads.begin()) check = prev(nextPos);
            else check = beads.begin();
        }  
        else{
            break;
        }
        
    }
    if (beads.empty()) {
        cout << "\n";
    } 
    else {
        bool first = true;
        for (int bead : beads) {
            if (!first) cout << " ";
            cout << bead;
            first = false;
        }
        cout << "\n";
    }
    return 0;
}