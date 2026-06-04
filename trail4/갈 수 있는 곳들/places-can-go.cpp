#include <bits/stdc++.h>
using namespace std;
int A[102][102]; 
int dx[] = {-1, 0, 1, 0}, dy[] ={0, 1, 0, -1}; 
int N, K; 
int visited[102][102]; 
int ans=0; 

int main() {
    // Please write your code here.
    cin>>N>>K; 
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cin>>A[i][j]; 
        }
    }
    queue<pair<int, int>> q; 
    while(K--) {
        int a, b; 
        cin>>a>>b;
        a--; b--;  
        q.push({a, b}); 
        visited[a][b] = 1; 
        ans++; 
    }

    while(q.size()) {
        auto [x, y] = q.front(); q.pop(); 
        for(int i=0; i<4; i++) {
            int nx = x+dx[i], ny = y+dy[i]; 
            if (nx < 0 || ny < 0 || nx >= N || ny >= N || visited[nx][ny] || A[nx][ny]) continue; 
            ans++; 
            visited[nx][ny] = 1; 
            q.push({nx, ny}); 
        }
    }
    cout<<ans; 
    return 0;
}