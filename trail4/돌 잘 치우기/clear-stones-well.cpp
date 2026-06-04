#include <bits/stdc++.h>
using namespace std;
int N, K, M; 
int A[102][102]; 
int visited[102][102]; 
int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};  
int ans=0; 
vector<pair<int, int>> P; 
vector<pair<int, int>> stone; 
void bfs() {
    queue<pair<int, int>> q; 
    memset(visited, 0, sizeof(visited)); 
    for(auto &p : P ) {
        q.push({p.first, p.second}); 
        visited[p.first][p.second] = 1; 
    }

    while(q.size()) {
        auto [x,y] = q.front(); q.pop(); 
        for(int i=0; i<4; i++) {
            int nx = x+dx[i], ny = y+dy[i]; 
            if (nx < 0 || ny < 0 || nx >= N || ny >= N || visited[nx][ny] || A[nx][ny]==1) continue; 
            visited[nx][ny] = 1; 
            q.push({nx, ny}); 
        }
    }

    int tmp=0; 
    for(int i=0; i<N; i++) for(int j=0; j<N; j++) tmp += visited[i][j]; 
    ans = max(ans, tmp); 
}


void go(int idx, vector<int> b) {
    if (b.size() == M) {
        for(int i=0; i<M; i++) {
            A[stone[b[i]].first][stone[b[i]].second] = 0; 
        }
        bfs(); 
        for(int i=0; i<M; i++) {
            A[stone[b[i]].first][stone[b[i]].second] = 1; 
        }
        return;
    }
    for(int i=idx+1; i<stone.size(); i++) {
        b.push_back(i); 
        go(i, b); 
        b.pop_back(); 
    }
}
int main() {
    // Please write your code here.
    cin>>N>>K>>M; 
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cin>>A[i][j]; 
            if (A[i][j] == 1) stone.push_back({i, j}); 
        }
    }
    while(K--) {
        int a, b; cin>>a>>b; 
        a--; b--; 
        P.push_back({a, b});
    }
    
    vector<int> b; 
    go(-1, b); 
    cout<<ans; 

    return 0;
}