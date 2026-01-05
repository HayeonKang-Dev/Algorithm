#include <bits/stdc++.h>
using namespace std;
int n, mx=INT_MIN; 
string s; 
unordered_map<string, int> mp; 
int main() {
    // Please write your code here.
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>s; 
        mp[s]++; 
        mx = max(mx, mp[s]);
    }
    cout<<mx; 
    
    return 0;
}