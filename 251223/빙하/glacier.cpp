#include <bits/stdc++.h>
using namespace std;
int n, m, mp[202][202], visited[202][202], dx[]={-1, 0, 1, 0}, dy[]={0, 1, 0, -1}; 
queue<pair<int, int>> q; 
vector<pair<int, int>> v; 
int sec, ans;
int main() {
    // Please write your code here.
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL); 
    cin>>n>>m; 
    for(int i=0; i<n; i++) {
        for(int j=0 ;j<m; j++) {
            cin>>mp[i][j]; 
            if (i==0 || i==n-1 || j==0 || j==m-1) {
                q.push({i, j}); 
                visited[i][j] = 1; 
            }
        }
    }
    while(1) {
        v.clear(); 
        while(q.size()) {
            auto [x, y] = q.front(); q.pop(); 
            for(int i=0; i<4; i++) {
                int nx = x+dx[i], ny=y+dy[i]; 
                if (nx <0 || ny <0 || nx >= n || ny >= m|| visited[nx][ny]) continue; 
                if (mp[nx][ny] == 1) {v.push_back({nx, ny}); }
                else { q.push({nx, ny}); }
                visited[nx][ny] = 1; 
            }
        }
        if (v.empty()) break; 
        ans = v.size(); 
        sec++; 
        for(int i=0; i<v.size(); i++) {
            mp[v[i].first][v[i].second] = 0; 
            q.push({v[i].first, v[i].second}); 
        }
    }
    cout<<sec<<' '<<ans; 
    return 0;
}