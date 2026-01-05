#include <bits/stdc++.h>
using namespace std;

int n, m; 
unordered_map<string, string> mp; 
unordered_map<string, string> mp2; 

int main() {
    // Please write your code here.
    cin>>n>>m; 
    for(int i=0; i<n; i++) {
        string s; cin>>s; 
        mp.insert({s, to_string(i+1)}); 
        mp2.insert({to_string(i+1), s}); 
    }
    for(int i=0; i<m; i++) {
        string s; cin>>s; 
        if (mp.find(s) != mp.end()) {
            cout<<mp[s]<<'\n';
        }
        if (mp2.find(s) != mp2.end()) {
            cout<<mp2[s]<<'\n';
        }
    }
    return 0;
}