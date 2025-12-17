#include <bits/stdc++.h>
using namespace std;
int n; 
vector<int> v; 
int main() {
    // Please write your code here.
    cin>>n; 
    for(int i=0; i<n; i++) {
        int a; 
        cin>>a; 
        v.push_back(a); 
    }
    int ans= 2147000000;
    for(int i=0; i<n; i++) {
        int tmp = 0, prv = 0; 
        for(int j=i; j<i+n; j++) {
            tmp +=  prv* v[j%n]; 
            prv++; 
        }
        ans = min(ans, tmp); 
    }
    cout<<ans; 
    return 0;
}