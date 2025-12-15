#include <bits/stdc++.h>
using namespace std;
int n, dp[102][102], mp[102][102]; 
int main() {
    // Please write your code here.
    cin>>n; 
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) cin>>mp[i][j]; 
    }
    dp[0][0] = mp[0][0]; 
    for(int i=1; i<n; i++) {
        dp[i][0] = min(dp[i-1][0], mp[i][0]); 
        dp[0][i] = min(dp[0][i-1], mp[0][i]); 
    }
    for(int i=1; i<n; i++) {
        for(int j=1; j<n; j++) {
            dp[i][j] = min(max(dp[i-1][j], dp[i][j-1]), mp[i][j]); 
        }
    }
    cout<<dp[n-1][n-1];
    return 0;
}