#include <bits/stdc++.h>
using namespace std;

int N; 
vector<pair<int, int>> v; 
int dp[105]; 

int main() {
    // Please write your code here.
    cin>>N; 
    for(int i=0; i<N; i++) {
        int a; cin>>a; 
        v.push_back({i+1, a}); 
    }
    for(int i=0; i<N; i++) {
        for(int j=v[i].first; j<=N; j++) {
            dp[j] = max(dp[j], dp[j-v[i].first] + v[i].second); 
        }
    }
    cout<<dp[N]; 
    return 0;
}