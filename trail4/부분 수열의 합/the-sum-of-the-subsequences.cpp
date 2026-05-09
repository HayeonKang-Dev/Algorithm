#include <bits/stdc++.h>
using namespace std;
// dp[i] = 1 : i를 만들 수 있다. (여부 dp)? 
int dp[10005]; 
int N, M; 
vector<int> v; 
int main() {
    // Please write your code here.
    cin>>N>>M; 
    for(int i=0; i<N; i++) {
        int a; cin>>a; 
        v.push_back(a); 
    }
    dp[0] = 1; 
    for(int i=0; i<N; i++) {
        for(int j=M; j>=v[i]; j--) {
            if (dp[j-v[i]]) dp[j] = dp[j-v[i]] + 1; 
        }
    }

    if (dp[M]) cout<<"Yes"; 
    else cout<<"No"; 
    return 0;
}