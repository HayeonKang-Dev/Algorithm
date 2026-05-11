#include <bits/stdc++.h>
using namespace std;

int A[102][102]; 
int N, M; 
int x, y; 
int main() {
    // Please write your code here.
    cin>>N>>M>>x>>y; 
    int up = 1, front = 2, right = 3, down = 6, left = 4, back = 5; 
    A[x][y] = down; 
    while(M--) {
        char c; cin>>c; 
        
        int tmp = up; 
        if (c=='L') {
            if (y-1 <=0) continue; 
            y--; 
            up = right; 
            right = down; 
            down = left; 
            left = tmp; 
            
        }
        else if (c=='R') {
            if (y+1 > N) continue; 
            y++; 
            up = left; 
            left = down; 
            down = right; 
            right = tmp; 
            
        }
        else if (c=='U') {
            if (x-1 <= 0) continue; 
            x--; 
            up = front; 
            front = down; 
            down = back; 
            back = tmp; 

        }
        else if (c=='D') {
            if (x+1 > N) continue; 
            x++; 
            up = back; 
            back = down; 
            down = front; 
            front = tmp; 
        }
        A[x][y] = down; 
    }
    int ans=0; 

    for(int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) {
            // cout<<A[i][j]<<' ';
            ans += A[i][j]; 
        }
        // cout<<'\n';
    }
    cout<<ans; 
    return 0;
}