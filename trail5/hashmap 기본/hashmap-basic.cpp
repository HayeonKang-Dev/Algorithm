#include <bits/stdc++.h>
using namespace std;
int N; 
unordered_map<int, int> um; 

int main() {
    // Please write your code here.
    cin>>N; 
    while(N--) {
        string s; 
        cin>>s; 
        if (s=="add") {
            int k, v; 
            cin>>k>>v; 
            um[k] = v; 
        }
        else if (s=="remove") {
            int k; 
            cin>>k; 
            if (um.count(k)) um.erase(k); 
        }
        else {
            int k; 
            cin>>k; 
            if (um.count(k)) cout<<um[k]<<'\n';
            else cout<<"None\n";
        }
    }
    
    return 0;
}