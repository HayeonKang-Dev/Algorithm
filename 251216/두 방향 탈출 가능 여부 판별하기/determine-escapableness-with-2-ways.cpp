#include <bits/stdc++.h>
using namespace std;
int n, m, mp[102][102], visited[102][102]; 
int dx[] = {0, 1}, dy[]={1, 0}; 
int main() {
    // Please write your code here.
    cin>>n>>m; 
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) cin>>mp[i][j]; 
    }
    visited[0][0] = 1; 
    queue<pair<int, int>> q; 
    q.push({0, 0}); 
    while(q.size()) {
        auto [x, y] = q.front(); q.pop(); 
        for(int i=0; i<2; i++) {
            int nx = x+dx[i], ny=y+dy[i]; 
            if (nx < 0 || ny < 0 || nx >= n || ny >= m || visited[nx][ny] || mp[nx][ny]==0) continue; 
            visited[nx][ny] = visited[x][y] + 1; 
            q.push({nx, ny}); 
        }
    }
    if (visited[n-1][m-1]) cout<<1<<'\n';
    else cout<<0<<'\n';

    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<m; j++) cout<<visited[i][j]<<' ';
    //     cout<<'\n';
    // }
    return 0;
}