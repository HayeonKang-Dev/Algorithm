#include <bits/stdc++.h>
using namespace std;
vector<int> adj[10], v; 
void init() {
    for(int i=0; i<10; i++) {
        adj[i].clear(); 
    }
}
int n, mx; 
int main() {
    // Please write your code here.
    cin>>n; 
    for(int i=0; i<n; i++) {
        int a; 
        cin>>a; 
        v.push_back(a); 
        mx = max(mx, a); 
    }
    int d = 1; 
    while(mx/d > 0) {
        init(); 
        for(int i=0; i<n; i++) {
            int digit = (v[i]/d) % 10; 
            adj[digit].push_back(v[i]); 
        }
       
        v.clear(); 
        v.reserve(n); 
        for(int i=0; i<10; i++) {
            for(int a : adj[i]) v.push_back(a); 
        }
        d *= 10;
    }
    for(int a : v) cout<<a<<' ';
    return 0;
}