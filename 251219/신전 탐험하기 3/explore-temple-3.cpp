#include <bits/stdc++.h>
using namespace std;
int n, m; 
int num[1002][102]; 
int dp[1002][102]; // dp[x][y] : x층 까지 살펴봤고, 마지막으로 방문한게 y일 때 최대 개수 
void print() {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout<<dp[i][j]<<' ';
        }
        cout<<'\n';
    }
}
int main() {
    // Please write your code here.
    cin>>n>>m;
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin>>num[i][j]; 

    for(int i=0; i<n; i++) for(int j=0; j<m; j++) dp[i][j] = -2147000000; 

    for(int i=0; i<m; i++) dp[0][i] = num[0][i]; 
    

    for(int i=1; i<n; i++) {
        for(int j=0; j<m; j++) {
            for(int k=0; k<m; k++) {
                if (j==k) continue; 
                dp[i][j] = max(dp[i][j], dp[i-1][k] + num[i][j]); 
            }
        }
    }
    int ans=0; 
    for(int i=0; i<m; i++) ans = max(ans, dp[n-1][i]); 
    cout<<ans; 
    return 0;
}