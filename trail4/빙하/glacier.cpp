#include <bits/stdc++.h>
using namespace std;
int N, M; 
int A[202][202], visited[202][202]; 
int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1}; 

int main() {
    // Please write your code here.
    cin>>N>>M; 
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cin>>A[i][j]; 
    }

    int sec=0, sz=0; 
    while(1) {
        vector<pair<int, int>> v; 
        queue<pair<int, int>> q; 
        q.push({0, 0}); 
        memset(visited, 0, sizeof(visited)); 
        visited[0][0] = 1; 
        while(q.size()) {
            auto [x,y] = q.front(); q.pop(); 
            for(int i=0; i<4; i++) {
                int nx = x+dx[i], ny = y+dy[i]; 
                if (nx < 0 || ny < 0 || nx >= N || ny >= M || visited[nx][ny]) continue; 
                visited[nx][ny] = 1; 
                if (A[nx][ny]==1) {
                    v.push_back({nx, ny}); 
                    continue; 
                }
                q.push({nx, ny}); 
            }
        }
        
        if (v.size() == 0) break; 
        sec++; 
        sz = v.size(); 

        for(auto &p : v) {
            A[p.first][p.second] = 0; 
        }

    }
    cout<<sec<<' '<<sz; 

    return 0;
}