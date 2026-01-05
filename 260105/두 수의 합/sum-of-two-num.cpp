#include <bits/stdc++.h>
using namespace std;
int n, k; 
unordered_map<int, int> mp; 
vector<int> v; 
int main() {
    // Please write your code here.
    int n, k; 
    cin>>n>>k; 
    for(int i=0; i<n; i++) {
        int a; 
        cin>>a; 
        mp[a]++; 
        v.push_back(a); 
    }
    sort(v.begin(), v.end()); 
    int ans=0; 
    for(int i=0; i<n; i++) {
        if (v[i] > k/2) break; 
        int a = k-v[i]; 
        ans = ans + mp[v[i]] * mp[a];
        // cout<<mp[v[i]]<<":"<<mp[a]<<'\n';
        
    }
    cout<<ans; 
    return 0;
}