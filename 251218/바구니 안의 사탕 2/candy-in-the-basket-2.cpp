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
    for(int i=0; i<=100; i++) {
        int tmp=0; 
        for(int j=i-k; j<=i+k; j++) {
            if (j >= 0 && j <= 100) {
                tmp += candy[j]; 
            }
        } 
        ans = max(ans, tmp); 
    } 
    cout<<ans; 
    return 0;
}