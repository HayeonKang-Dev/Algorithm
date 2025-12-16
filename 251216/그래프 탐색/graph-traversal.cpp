#include <bits/stdc++.h>
using namespace std;
int n, m, visited[1002];
vector<int> adj[1002];  
int main() {
    // Please write your code here.
    cin>>n>>m; 
    for(int i=0; i<m; i++) {
        int a, b; 
        cin>>a>>b; 
        adj[a].push_back(b); 
        adj[b].push_back(a); 
    }

    queue<int> q; 
    visited[1] = 1; 
    q.push(1); 
    while(q.size()) {
        int curr = q.front(); q.pop(); 
        for(int nxt : adj[curr]) {
            if (visited[nxt] == 0) {
                visited[nxt] = 1; 
                q.push(nxt); 
            }
        } 
    }
    int ans=0;
    for(int i=2; i<=n; i++) if (visited[i]) ans++; 
    cout<<ans;  
    return 0;
}