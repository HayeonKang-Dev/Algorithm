#include <iostream>
using namespace std;
int n, dp[1002]; 
const int MOD = 10007; 

int main() {
    // Please write your code here.
    cin>>n; 
    dp[0] = dp[1] = 1; 
    for(int i=2; i<=n; i++) {
        dp[i] = (dp[i-2]*2 + dp[i-1]) % MOD; 
    }
    cout<<dp[n]%MOD; 
    return 0;
}