#include <bits/stdc++.h>
using namespace std;
int n; 
vector<int> v; 
bool f(int a, int b, int c) {
    bool flag = true; 
    // cout<<"A: "<<a<<", B: "<<b<<", C: "<<c<<'\n';
    while(a > 0 || b > 0 || c >0 ) {
        if (a%10 + b%10 + c%10 >= 10) return false; 
        a/=10; b/=10; c/=10; 
        // cout<<a<<" "<<b<<" "<<c<<'\n'; 
    }
    return true; 
}
int main() {
    // Please write your code here.
    cin>>n; 
    for(int i=0; i<n; i++) {
        int a; 
        cin>>a; 
        v.push_back(a); 
    }
    int ans = -1; 
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            for(int k=j+1; k<n; k++) {
                if (f(v[i], v[j], v[k])) {
                    ans = max(ans, v[i]+v[j]+v[k]); 
                }
            }
        }
    }
    cout<<ans; 
    return 0;
}