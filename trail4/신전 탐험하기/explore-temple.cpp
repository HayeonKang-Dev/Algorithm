#include <bits/stdc++.h>
using namespace std;
int N; 
int dp[1002][3]; 
int A[1002][3]; 

int main() {
    // Please write your code here.
    cin>>N; 
    for(int i=0; i<N; i++) {
        cin>>A[i][0]>>A[i][1]>>A[i][2]; 
    }
    memset(dp, -1, sizeof(dp)); 
    dp[0][0] = A[0][0]; 
    dp[0][1] = A[0][1]; 
    dp[0][2] = A[0][2]; 
    for(int i=1; i<N; i++) {
        dp[i][0] = max(dp[i-1][1], dp[i-1][2]) + A[i][0]; 
        dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + A[i][1]; 
        dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + A[i][2]; 
    }
    cout<<max({dp[N-1][0], dp[N-1][1], dp[N-1][2]});
    return 0;
}