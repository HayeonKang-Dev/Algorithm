#include <bits/stdc++.h>
using namespace std;
int N, M; 
vector<pair<int, int>> v; 
int dp[10006]; 

int main() {
    // Please write your code here.
    cin>>N>>M; 
    for(int i=0; i<N; i++) {
        int a, b; 
        cin>>a>>b; 
        v.push_back({a, b}); 
    }
    for(int i=0; i<N; i++) {
        for(int j=v[i].first; j<=M; j++) {
            dp[j] = max(dp[j], dp[j-v[i].first] + v[i].second); 
        }
    }
    cout<<dp[M]; 
    return 0;
}