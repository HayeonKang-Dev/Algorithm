#include <bits/stdc++.h>
using namespace std;
int n, k; 
vector<int> v; 
int main() {
    // Please write your code here.
    cin>>n>>k; 
    for(int i=0; i<n; i++) {
        int a; 
        cin>>a; 
        v.push_back(a); 
    }
    int ans=0;
    for(int i=0; i<=n-k; i++) {
        int tmp=0;
        for(int j=i; j<i+k; j++) {
            tmp += v[j]; 
        } 
        ans = max(ans, tmp); 
    }
    cout<<ans; 
    return 0;
}