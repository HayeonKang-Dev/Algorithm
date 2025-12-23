#include <bits/stdc++.h>
using namespace std;
int n, m, mp[55][55], visited[55][55]; 
int ans=0, dx[]={-1, 0, 1, 0}, dy[]={0, 1, 0, -1};
int mx = INT_MIN; 
int ret_depth; 
void dfs(int x, int y, int depth) {
    visited[x][y] = 1; 
    for(int i=0; i<4; i++) {
        int nx = x+dx[i], ny=y+dy[i]; 
        if (nx < 0 || ny < 0 || nx >= n || ny >= m || visited[nx][ny] || mp[nx][ny] <= depth) continue; 
        dfs(nx, ny, depth); 
    }
}
int main() {
    // Please write your code here.
    cin>>n>>m; 
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) {
        cin>>mp[i][j]; mx = max(mx, mp[i][j]); 
    }

    for(int i=1; i<=mx; i++) {
        int tmp=0;
        memset(visited, 0, sizeof(visited)); 
        //cnt=1;
        for(int j=0; j<n; j++) {
            for(int k=0; k<m; k++) {
                if (mp[j][k] > i && visited[j][k] ==0 ) {
                    tmp++; 
                    dfs(j, k, i); 
                }
            }
        }
        if (ans < tmp) {
            ans = tmp; 
            ret_depth = max(ret_depth, i);
        } 

    }  
    cout<<ret_depth<<" "<<ans; 

    return 0;
}