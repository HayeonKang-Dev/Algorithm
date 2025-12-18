#include <bits/stdc++.h>
using namespace std;
int n, h, t; 
vector<int> v; 
int main() {
    // Please write your code here.
    cin>>n>>h>>t; 
    for(int i=0; i<n; i++) {
        int a; 
        cin>>a;
        v.push_back(a); 
    }
    int ans = INT_MAX; 
    for(int i=0; i<=n-t; i++) {
        int tmp=0; 
        for(int j=i; j<i+t; j++) {
            tmp += abs(h-v[j]); 
        }
        ans = min(ans, tmp); 
    }
    cout<<ans; 
    return 0;
}