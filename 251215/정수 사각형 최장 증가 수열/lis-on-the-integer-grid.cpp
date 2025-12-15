#include <bits/stdc++.h>
using namespace std;
int n, mp[502][502], dp[502][502]; 
int dx[]={-1, 0, 1, 0}, dy[]={0, 1, 0, -1}; 
int main() {
    // Please write your code here.
    cin>>n; 
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>>mp[i][j]; 
        }
    }
    int ans=-1; 
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            memset(dp, 0, sizeof(dp)); 
            dp[i][j] = 1; 
            queue<pair<int, int>> q; 
            q.push({i, j}); 
            int cnt = -1; 
            while(q.size()) {
                auto [x, y] = q.front(); q.pop(); 
                for(int k=0; k<4; k++) {
                    int nx = x+dx[k], ny=y+dy[k]; 
                    if (nx <0 || ny < 0 || nx >= n || ny >= n || mp[x][y] >= mp[nx][ny] || dp[nx][ny]) continue; 
                     
                    q.push({nx, ny}); 
                    dp[nx][ny] = dp[x][y] + 1; 
                    cnt = max(cnt, dp[nx][ny]); 
                }
            }
            ans = max(ans, cnt); 
        }
    }
    cout<<ans; 
    return 0;
}