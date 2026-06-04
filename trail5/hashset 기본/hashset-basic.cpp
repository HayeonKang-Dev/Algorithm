#include <bits/stdc++.h>
using namespace std;
int N; 
int main() {
    // Please write your code here.
    cin>>N; 
    unordered_map<int, int> um; 
    while(N--) {
        string s; 
        int a; 
        cin>>s>>a; 
        if (s=="add") {
            um[a] = 1; 
        }
        else if (s=="remove") {
            um.erase(a); 
        }
        else {
            cout<<((um.count(a)) ? "true" : "false")<<'\n';
        }
    }
    return 0;
}