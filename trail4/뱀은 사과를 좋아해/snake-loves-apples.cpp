#include <bits/stdc++.h>
using namespace std;
int N, M, K; 
int A[102][102]; // 사과 = 1, 뱀 = 4

int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1}; 
deque<pair<int, int>>  snake; 
void print() {
    cout<<"===============================\n"; 
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) cout<<A[i][j]<<' ';
        cout<<'\n';
    }
}
int main() {
    // Please write your code here.
    cin>>N>>M>>K; 
    for(int i=0; i<M; i++) {
        int a, b; 
        cin>>a>>b; 
        A[a][b] = 1; 
    }
    A[1][1] = 4; 
    // print(); 
    int x =1, y=1; 
    snake.push_back({1, 1}); 
    int ans=0; 
    for(int i=0; i<K; i++) {
        char d; int n; 
        cin>>d>>n; 
        int dir=0; 
        if (d=='U') dir = 0; 
        else if (d=='D') dir = 2; 
        else if (d=='R') dir = 1; 
        else dir = 3; 
        for(int j=0; j<n; j++) {
            int nx = x+dx[dir], ny = y+dy[dir]; 
            ans++; 
            if (nx < 1 || ny < 1 || nx > N || ny > N ) {cout<<ans; return 0;}  
            bool apple = (A[nx][ny]==1); 
            if (!apple) {
                pair<int, int> tail = snake.back(); 
                snake.pop_back(); 
                A[tail.first][tail.second] = 0; 
            }
            if (A[nx][ny] == 4) {
                cout<<ans; 
                return 0; 
            }
            A[nx][ny] = 4; 
            snake.push_front({nx, ny}); 
            x = nx; y = ny; 
        }
        
        // print(); 
        
    }
    cout<<ans;
    return 0;
}