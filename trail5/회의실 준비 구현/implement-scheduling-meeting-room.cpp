#include <bits/stdc++.h>
using namespace std;
int N; 
vector<pair<int, int>> v; 

int main() {
    // Please write your code here.
    cin>>N; 
    for(int i=0; i<N; i++) {
        int s, e; 
        cin>>s>>e; 
        v.push_back({e, s}); 
    }
    sort(v.begin(), v.end()); 
    int ans=1; 
    int prv = v[0].first; 
    for(int i=1; i<N; i++) {
        if (v[i].second >= prv) {
            ans++; 
            prv = v[i].first; 
        }
    }
    cout<<ans; 
    return 0;
}