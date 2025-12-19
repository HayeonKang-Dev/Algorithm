#include <bits/stdc++.h>
using namespace std;
int n, m; 
int num[502], dp[502][5][102];
int main() {
    // Please write your code here.
    cin>>n>>m; 
    for(int i=0; i<n; i++) {
        cin>>num[i]; 
    }
    for(int i=0; i<n; i++) {
        for(int j=1; j<=4; j++) {
            for(int k=0; k<=m; k++) {
                dp[i][j][k] = INT_MIN; 
            }
        }
    }
    for(int i=1; i<=4; i++) {
        if (i== num[0]) dp[0][i][0] = 1; 
        else dp[0][i][0] = 0; 
    }

    for(int i=1; i<n; i++) {
        for(int j=1; j<=4; j++) {
            for(int k=0; k<=m; k++) {
                if (dp[i-1][j][k] == INT_MIN) continue; 

                for(int c=1; c<=4; c++) {
                    int diff = (j != c); 
                    int nk = k + diff; 
                    if (nk > m) continue;

                    int gain =0; 
                    if (c == num[i]) gain = 1; 
                    else gain =0; 

                    dp[i][c][nk] = max(dp[i][c][nk], dp[i-1][j][k] + gain); 
                }
            }
        }
    }

    int ans=0; 
    for(int i=1; i<=4; i++) {
        for(int j=0; j<=m; j++) {
            ans = max(ans, dp[n-1][i][j]); 
        }
    }
    cout<<ans; 
    return 0;
}