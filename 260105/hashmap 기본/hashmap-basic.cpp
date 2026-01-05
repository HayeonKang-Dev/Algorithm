#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> mp; 
int n, k, v; 
string s; 
int main() {
    // Please write your code here.
    cin>>n; 
    for(int i=0; i<n; i++) {
        cin>>s; 
        if (s=="add") {
            cin>>k>>v; 
            if (mp.find(k) != mp.end()) {
                mp[k] = v; 
            }
            else mp.insert({k, v}); 
        }
        if (s=="find") {
            cin>>k; 
            if (mp.find(k) != mp.end()) {
                cout<<mp[k]<<'\n';
            }
            else cout<<"None\n"; 
        }
        if (s=="remove") {
            cin>>k; 
            if (mp.find(k) != mp.end()) {
                mp.erase(k); 
            } 

        }
    }

    return 0;
}