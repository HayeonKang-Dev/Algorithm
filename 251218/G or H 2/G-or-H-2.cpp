#include <bits/stdc++.h>
using namespace std;
int n, num[102]; 
vector<pair<int, char>> v; 
int main() {
    // Please write your code here.
    cin>>n; 
    for(int i=0; i<n; i++) {
        char c; 
        int a; 
        cin>>a>>c; 
        v.push_back({a, c}); 
    }
    int ans=0; 
    sort(v.begin(), v.end()); 
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            int g=0, h=0; 
            for(int k=i; k<=j; k++) {
                if (v[k].second == 'G') g++; 
                else h++; 
            }
            // cout<<i<<" ~ "<<j<<" => g: "<<g<<", h: "<<h<<'\n';
            if (g==0 && h==0) continue; 
            if (g==h) ans = max(ans, (v[j].first - v[i].first)); 
            if (g==0 || h==0) ans = max(ans, (v[j].first - v[i].first)); 
            // cout<<"\tans: "<<ans<<'\n'; 
        }
    }
    cout<<ans; 
    return 0;
}