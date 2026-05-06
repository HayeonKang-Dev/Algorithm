#include <bits/stdc++.h>
using namespace std;

int dp[1002][102]; 
int A[1002][102]; 
int N, M; 
int main() {
    // Please write your code here.
    cin>>N>>M; 
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cin>>A[i][j]; 
    }
    memset(dp, -1, sizeof(dp)); 
    for(int i=0; i<M; i++) dp[0][i] = A[0][i]; 

    for(int i=1; i<N; i++) {
        for(int j=0; j<M; j++) { // 현재 방
            for(int k=0; k<M; k++) { // 이전 방
                if (j==k) continue; 
                dp[i][j] = max(dp[i][j], dp[i-1][k] + A[i][j]); 
            }
        }
    }
    int ans=0; 
    for(int i=0; i<M; i++) {
        ans = max(ans, dp[N-1][i]); 
    }
    cout<<ans; 
    return 0;
}