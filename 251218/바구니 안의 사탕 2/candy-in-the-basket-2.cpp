#include <bits/stdc++.h>
using namespace std;
int n, k, candy[102]; 
int main() {
    // Please write your code here.
    cin>>n>>k; 
    for(int i=0; i<n; i++) {
        int a, b; 
        cin>>a>>b; 
        candy[b] += a; 
    }
    int ans=0; 
    for(int i=k; i<=100; i++) {
        int tmp=0; 
        // cout<<"범위: "<<i-k<<" ~ "<<i+k-1<<'\n';
        // cout<<"왼쪽("<<i-k<<"), 중앙("<<i<<"), 오른쪽("<<i+k<<")\n"; 
        int lim = min(100, i+k); 
        for(int j=i-k; j<=lim; j++) {
            tmp += candy[j]; 
        }
        ans = max(ans, tmp); 
    } 
    cout<<ans; 
    return 0;
}