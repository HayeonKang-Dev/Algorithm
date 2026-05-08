#include <bits/stdc++.h>
using namespace std;
string A, B; 
int N, M; 
int dp[1002][1002]; 

int main() {
    // Please write your code here.
    cin>>A>>B;    
    N = A.size(); 
    M = B.size(); 

    A = " " + A; 
    B = " " + B; 

 

    for(int i=1; i<=N; i++) {
        for(int j=1; j<=M; j++) {
            if (A[i] == B[j]) {
                dp[i][j] = dp[i-1][j-1] + 1; 
            }
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]); 
        }
    }
    cout<<dp[N][M]; 
    return 0;
}