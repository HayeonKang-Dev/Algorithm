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
    int ans = 0;
    for(int i=0; i<n; i++) {
        for(int j=i+2; j<n; j++) {
            ans = max(ans, v[i] + v[j]); 
        }
    }
    cout<<ans; 
    return 0;
}