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

    int ans=2147000000; 
    for(int i=0; i<n; i++) {
        int tmp=0; 
        for(int j=0; j<n; j++) {
            if (i==j) continue; 
            tmp += abs(i-j) * v[j]; 
        }
        ans = min(ans, tmp); 
    }
    cout<<ans; 
    
    return 0;
}