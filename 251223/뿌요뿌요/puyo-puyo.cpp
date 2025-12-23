#include <bits/stdc++.h>
using namespace std;
int n, mp[102][102], visited[102][102]; 
int dx[] = {-1, 0, 1, 0}, dy[]={0, 1, 0, -1}; 
int cnt, ans, width;
void dfs(int x, int y) {
    visited[x][y] = 1; 
    for(int i=0; i<4; i++) {
        int nx = x+dx[i], ny=y+dy[i]; 
        if (nx < 0 || ny < 0 || nx >= n || ny >= n || visited[nx][ny] || mp[nx][ny] != mp[x][y]) continue; 
        cnt++; 
        dfs(nx, ny); 
    }
}
int main() {
    // Please write your code here.
    cin>>n; 
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin>>mp[i][j]; 

    for(int i=0; i<n; i++) {
        for(int j=0; j<n ;j++) {
            if (visited[i][j] == 0) {
                cnt=1; 
                dfs(i, j); 
                if (cnt >=4) {
                    ans++; 
                }
                width = max(width, cnt);
            }

        }
    }
    cout<<ans<<' '<<width;

    return 0;
}