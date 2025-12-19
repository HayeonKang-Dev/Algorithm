#include <bits/stdc++.h>
using namespace std;
int n, m; 
int a[501]; 
int dp[501][101][5]; 
int main() {
    // Please write your code here.
    cin>>n>>m; 
    for(int i=0; i<n; i++) cin>>a[i]; 

    for(int i=0; i<n; i++) {
        for(int j=0; j<=m; j++) {
            for(int k=1; k<=4; k++) dp[i][j][k] = INT_MIN; 
        }
    }
    for(int i=1; i<=4; i++) dp[0][0][i] = (i == a[0]); 

    for(int i=1; i<n; i++) { // i번째 숫자까지 고려했을 때 
        for(int j=0; j<=m; j++) { // 그 동안 숫자를 j번 변경했고 
            for(int k=1; k<=4; k++) { // 마지막으로 사용한 숫자가 k라 했을 때 
                for(int l=1; l<=4; l++) { // i-1번째에 사용한 숫자 l 
                    if (l==k) {
                        dp[i][j][k] = max(dp[i][j][k], dp[i-1][j][l] + (a[i] == k)); 
                    }
                    if (l != k && j > 0) {
                        dp[i][j][k] = max(dp[i][j][k], dp[i-1][j-1][l] + (a[i] == k)); 
                    }
                }
            }
        }
    }
    int ans=0; 
    for(int i=0; i<=m; i++) {
        for(int j=1; j<=4; j++) {
            ans = max(ans, dp[n-1][i][j]); 
        }
    }
    cout<<ans; 
    return 0;
}