#include <bits/stdc++.h>
using namespace std;
int n, k; 
int num[10002]; 
int main() {
    // Please write your code here.
    cin>>n>>k; 
    int mx = -1;
    for(int i=0; i<n; i++) {
        char c; 
        int a; 
        cin>>a>>c; 
        mx = max(mx, a); 
        if (c=='G') {
            num[a] = 1; 
        }
        else num[a] = 2; 
    }
    // for(int i=1; i<=mx; i++) cout<<num[i]<<' '; 
    // cout<<'\n';
    int ans = -1; 
    for(int i=1; i<=mx-k; i++) {
        int tmp=0; 
        for(int j=i; j<i+k+1; j++) {
            tmp += num[j]; 
        }
        ans = max(ans, tmp); 
    }
    cout<<ans; 
    return 0;
}