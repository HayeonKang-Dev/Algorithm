#include <bits/stdc++.h>
using namespace std;
int N; 
map<int, int> mp; 

int main() {
    // Please write your code here.
    cin>>N; 
    while(N--) {
        string s; cin>>s; 
        if (s=="add") {
            int k, v; 
            cin>>k>>v; 
            mp[k] = v; 
        }
        else if (s=="remove") {
            int k; cin>>k; 
            mp.erase(k); 
        }
        else if (s=="find") {
            int k; cin>>k; 
            if (mp.find(k) != mp.end()) cout<<mp[k]<<'\n';
            else cout<<"None\n"; 
        }
        else if (s=="print_list") {
            if (mp.empty()) {cout<<"None\n"; }
            else {
                for(auto nxt : mp) {
                    cout<<nxt.second<<' ';
                }
                cout<<'\n';
            }
        }
    }
    return 0;
}