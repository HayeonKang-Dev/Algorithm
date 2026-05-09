#include <bits/stdc++.h>
using namespace std;
int N, M; 
vector<int> v; 
int dp[10005]; 
int main() {
    // Please write your code here.
    cin>>N>>M; 
    for(int i=0; i<N; i++) {
        int a; cin>>a; 
        v.push_back(a); 
    }
    fill(dp, dp+M+1, -1); 
    dp[0] = 0; 
    for(int i=0; i<N; i++) {
        for(int j=v[i]; j<=M; j++) {
            if (dp[j-v[i]] != -1) dp[j] = max(dp[j], dp[j-v[i]]+1); 
        }
    }
    cout<<dp[M]; 
    return 0;
}