#include <bits/stdc++.h>
using namespace std;
int n; 
vector<pair<int, int>> v; 
int main() {
    // Please write your code here.
    cin>>n; 
    for(int i=0; i<n; i++) {
        int a, b; 
        cin>>a>>b; 
        v.push_back({a, b}); 
    }
    int ans = 2147000000; 
    for(int i=1; i<n-1; i++) {
        int tmp=0, px=v[0].first, py=v[0].second; 
        for(int j=0; j<n; j++) {
            if (i==j) continue; 
            tmp += abs(px-v[j].first) + abs(py-v[j].second); 
            px = v[j].first; 
            py = v[j].second; 
        }
        ans = min(ans, tmp); 
    }
    cout<<ans; 
    return 0;
}