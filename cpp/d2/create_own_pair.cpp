#include<bits/stdc++.h>
using namespace std;
namespace CP {
    template<typename T1, typename T2>
    class pair{
        public:
            T1 first;
            T2 second;
    };
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    CP::pair<int, string> p1;
    p1.first = 10;
    p1.second = "Somchai";
    cout<<p1.first<<' '<<p1.second;
    return 0;
}