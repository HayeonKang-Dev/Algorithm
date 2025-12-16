#include <bits/stdc++.h>
using namespace std;

int n, mp[30][30], visited[30][30]; 
int dx[] = {-1, 0, 1, 0}, dy[]={0, 1, 0, -1}; 
int cnt; 
vector<int> v; 
void dfs(int x, int y) {
    visited[x][y] = 1; 
    for(int i=0; i<4; i++) {
        int nx = x+dx[i], ny=y+dy[i]; 
        if (nx < 0 || ny < 0 || nx >= n || ny >= n || visited[nx][ny] || mp[nx][ny]==0) continue; 
        dfs(nx, ny); 
        cnt++; 
    }
}
int main() {
    // Please write your code here.
    cin>>n; 
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) cin>>mp[i][j]; 
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if (visited[i][j]==0 && mp[i][j]==1) {
                cnt = 1; 
                dfs(i, j); 
                v.push_back(cnt); 
            }
        }
    }
    sort(v.begin(), v.end()); 
    cout<<v.size()<<'\n'; 
    for(int a : v) cout<<a<<'\n';

    return 0;
}