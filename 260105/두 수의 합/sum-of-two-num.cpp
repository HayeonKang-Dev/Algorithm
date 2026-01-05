#include <bits/stdc++.h>
using namespace std;
int n, k; 
unordered_map<int, int> mp; 
vector<int> v; 
int main() {
    // Please write your code here.

    cin>>n>>k; 
    for(int i=0; i<n; i++) {
        int a; 
        cin>>a; 
        mp[a]++; 
        if (find(v.begin(), v.end(), a) == v.end()) v.push_back(a); 
    }
    sort(v.begin(), v.end()); 
    int ans=0; 
    for(int i=0; i<n; i++) {
        int a=k-v[i]; 
        if (v[i] > a) break; 
        if (v[i] != a) {
            ans += mp[a] * mp[v[i]]; 
        }
        else {
            int b = mp[a]; 
            ans += (b * (b-1)) / 2; 
            break; 
        }
    }    
    cout<<ans; 
    return 0;
}