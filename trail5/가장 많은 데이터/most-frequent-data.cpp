#include <bits/stdc++.h>
using namespace std;
int N; 
unordered_map<string, int> mp; 

int main() {
    // Please write your code here.
    cin>>N; 
    while(N--) {
        string s; 
        cin>>s; 
        mp[s]++; 
    }
    int ans=0; 
    for(auto nxt : mp) {
        ans = max(ans, nxt.second); 
    }
    cout<<ans; 
    return 0;
}