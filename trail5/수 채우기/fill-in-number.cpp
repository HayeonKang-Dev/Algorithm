#include <bits/stdc++.h>
using namespace std;
int N; 
int dp[100006]; 
const int INF = 1e9; 
int main() {
    // Please write your code here.
    cin>>N; 
    for(int i=0; i<=N; i++) dp[i] = INF; 
    dp[0] = 0; 
    for(int i=5; i<=N; i++) {
        if (dp[i-5] != INF) dp[i] = min(dp[i], dp[i-5]+1); 
    }
    for(int i=2; i<=N; i++) {
        if (dp[i-2] != INF) dp[i] = min(dp[i], dp[i-2]+1); 
    }
    if (dp[N] == INF) cout<<-1; 
    else cout<<dp[N]; 

    return 0;
}