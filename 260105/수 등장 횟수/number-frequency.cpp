#include <bits/stdc++.h>
using namespace std;

int n, m; 
unordered_map<int, int> mp; 

int main() {
    // Please write your code here.
    cin>>n>>m; 
    for(int i=0; i<n; i++) {
        int a; 
        cin>>a; 
        mp[a]++; 
    }
    for(int i=0; i<m; i++) {
        int a; 
        cin>>a; 
        cout<<mp[a]<<' ';
    }
    return 0;
}