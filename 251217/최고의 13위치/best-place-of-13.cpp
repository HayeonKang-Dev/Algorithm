#include <bits/stdc++.h>
using namespace std;

int n, mp[22][22]; 
int main() {
    // Please write your code here.
    cin>>n; 
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin>>mp[i][j]; 

    int ans=0; 
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-2; j++) {
            ans = max(ans, mp[i][j]+mp[i][j+1]+mp[i][j+2]); 
        }
    }
    cout<<ans; 
    return 0;
}