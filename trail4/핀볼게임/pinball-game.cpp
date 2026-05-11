#include <bits/stdc++.h>
using namespace std;
int N; 
int A[102][102]; 
int visited[102][102][5]; 
int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1}; 
int go(int x, int y, int dir) {
    int cnt=1;
    memset(visited, 0, sizeof(visited)); 
   
    while(1) {
        if (x < 0 || y < 0 || x >= N || y >= N) return cnt; 
        if (visited[x][y][dir]) return -1; 

        visited[x][y][dir] = 1; cnt++; 

        if (A[x][y] == 2) {
            if (dir == 0) dir = 3; 
            else if (dir == 1) dir = 2; 
            else if (dir == 2) dir = 1; 
            else if (dir == 3) dir = 0; 
        }
        else if (A[x][y]==1) {
            if (dir == 0) dir = 1; 
            else if (dir == 1) dir = 0; 
            else if (dir == 2) dir = 3; 
            else if (dir == 3) dir = 2; 
        }
        x += dx[dir]; 
        y += dy[dir]; 
    }
    return -1;
}

int main() {
    // Please write your code here.
    cin>>N; 
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) cin>>A[i][j]; 
    }
    int ans=INT_MIN; 
    for(int i=0; i<N; i++) {
        ans = max(ans, go(0, i, 2)); 
        ans = max(ans, go(i, 0, 1)); 
        ans = max(ans, go(N-1, i, 0)); 
        ans = max(ans, go(i, N-1, 3)); 
    }
    cout<<ans; 

    return 0;
}