#include <bits/stdc++.h>
using namespace std;
int n, visited[1000005]; 
int main() {
    // Please write your code here.
    cin>>n; 
    memset(visited, -1, sizeof(visited)); 
    queue<int> q; 
    visited[n] = 0; 
    q.push(n); 
    while(q.size()) {
        int x = q.front(); q.pop(); 
        if (x==1) break; 
        if (x-1 >= 0 && visited[x-1] == -1) {
            visited[x-1] = visited[x] + 1 ; 
            q.push(x-1); 
        }
        if (visited[x+1] == -1) {
            visited[x+1] = visited[x] + 1; 
            q.push(x+1); 
        }
        if (x%2==0 && visited[x/2] == -1) {
            visited[x/2] = visited[x] + 1; 
            q.push(x/2); 
        }
        if (x%3==0 && visited[x/3] == -1) {
            visited[x/3] = visited[x] + 1; 
            q.push(x/3); 
        }
    }
    cout<<visited[1]; 
    return 0;
}