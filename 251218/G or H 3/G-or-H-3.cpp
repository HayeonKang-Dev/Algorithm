#include <bits/stdc++.h>
using namespace std;
int n, k; 
int num[10002]; 
int main() {
    // Please write your code here.
    cin>>n>>k; 
    int mx = -1, mn=INT_MAX; 
    for(int i=0; i<n; i++) {
        char c; 
        int a; 
        cin>>a>>c; 
        mx = max(mx, a); 
        mn = min(mn, a); 
        if (c=='G') {
            num[a] = 1; 
        }
        else num[a] = 2; 
    }
    if (mn == mx) {
        cout<<num[mn]; 
        return 0;
    }
    int ans = -1; 
    for(int i=1; i<=10000; i++) {
        int tmp=0; 
        // cout<<"I: "<<i<<", j: "<<i+k+1;
        if (i+k > 10000) break; 
        for(int j=i; j<=i+k; j++) {
            tmp += num[j]; 
        }
        // cout<<" => sum: "<<tmp<<'\n';
        ans = max(ans, tmp); 
    }
    cout<<ans; 
    return 0;
}