#include <bits/stdc++.h>
using namespace std;
int N; 
vector<int> v; 
int tot; 
int dp[100006]; 
int main() {
    // Please write your code here.
    cin>>N; 
    v.resize(N); 
    for(int i=0; i<N; i++) cin>>v[i]; 
    tot = accumulate(v.begin(), v.end(), 0); 
    dp[0] = 1; 

    for(int num : v) {
        for(int j=tot; j>=num; j--) {
            if (dp[j-num]) dp[j] = 1; 
        }
    }
    
    int ans=1e9; 
    for(int s=1; s<tot; s++) { // s= 합 
        if (dp[s]) {
            int diff = abs(tot - 2*s); // A의 합 = s, B의 합 = total-s, 즉, 차이는 |(total-s) - s| = total - 2*s 
            ans = min(ans, diff); 
        }
    }
    cout<<ans; 


    return 0;
}