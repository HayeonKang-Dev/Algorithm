#include <bits/stdc++.h>
using namespace std;
int N; 
int r, c; 
int A[102][102]; 
int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1}; 
void dfs(int x, int y) {
    cout<<A[x][y]<<' '; 
    for(int i=0; i<4; i++) {
        int nx = x+dx[i], ny = y+dy[i]; 
        if (nx < 0 || ny < 0 || nx >= N || ny >= N || A[nx][ny] <= A[x][y]) continue; 
        dfs(nx, ny); 
        break; 
    }
}
int main() {
    // Please write your code here.
    cin>>N; 
    cin>>r>>c; 
    for(int i=0; i<N; i++) for(int j=0; j<N; j++) cin>>A[i][j]; 
    r--; c--; 
    dfs(r, c); 

    return 0;
}