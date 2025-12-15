#include <bits/stdc++.h>
using namespace std;
int n, mp[502][502], dp[502][502]; 
vector<tuple<int, int, int>> v; 
int dx[] = {-1, 0, 1, 0}, dy[]={0, 1, 0, -1}; 
int main() {
    // Please write your code here.
    cin>>n; 
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>>mp[i][j]; 
            v.push_back({mp[i][j], i, j}); 
            dp[i][j] = 1; 
        }
    }
    int ans=-1; 
    sort(v.begin(), v.end()); 
    for(auto [val, x, y] : v) {
        for(int k=0; k<4; k++) {
            int nx = x+dx[k], ny=y+dy[k]; 
            if (nx < 0 || ny < 0 || nx >= n || ny >= n) continue; 
            if (mp[nx][ny] > val) {
                dp[nx][ny] = max(dp[nx][ny], dp[x][y]+1); 
                ans = max(ans, dp[nx][ny]); 
            }
        }
    }
    cout<<ans; 
    return 0;
}