#include <bits/stdc++.h>
using namespace std;
int n; 
int main() {
    // Please write your code here.
    cin>>n; 
    queue<pair<int, int>> q; 
    q.push({n, 0}); 
    while(q.size()) {
        auto [x, cnt] = q.front(); q.pop(); 
        if (x == 1) {
            cout<<cnt; 
            break; 
        }
        q.push({x-1, cnt+1}); 
        q.push({x+1, cnt+1}); 
        if (x%2==0) q.push({x/2, cnt+1}); 
        if (x%3==0) q.push({x/3, cnt+1}); 
    }

    return 0;
}