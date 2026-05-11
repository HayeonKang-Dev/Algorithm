#include <bits/stdc++.h>
using namespace std;
int N, M, x, y; 
bool A[102][102]; 
int dx[]  = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1}; 
struct Node {int x, y, cnt; }; 
// int cnt=0;
int main() {
    // Please write your code here.
    cin>>N>>M; 
    cin>>x>>y; 
    A[x][y] = 1; 
    queue<Node> q; 
    q.push({x, y, 0}); 
    while(q.size()) {
        Node node = q.front(); q.pop(); 
        int x = node.x, y = node.y, cnt =node.cnt; 
        if (cnt >= M) continue; 

        for(int i=0; i<4; i++) {
            int nx = x+dx[i]*pow(2, cnt), ny = y+dy[i]*pow(2, cnt); 
            if (nx < 1 || ny < 1 || nx > N|| ny > N) continue; 
            A[nx][ny] = 1; 
            q.push({nx, ny, cnt+1}); 
        }
        q.push({x, y, cnt+1}); 
    }
    int ans=0; 
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++) {
            // cout<<A[i][j]<<' ';
            ans += A[i][j]; 
        }
        // cout<<'\n';
    }
    cout<<ans; 
    return 0;
}