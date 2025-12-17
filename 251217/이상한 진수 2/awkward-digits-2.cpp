#include <bits/stdc++.h>
using namespace std;
string s; 
int n; 
int dig[11]; 
int f() {
    int tmp=0, d=0; 
    for(int i=n-1; i>=0; i--) {
        tmp += dig[i] * pow(2, d); 
        d++; 
    }
    return tmp; 
}

int main() {
    // Please write your code here.
    cin>>s; 
    n = s.size(); 
    for(int i=0; i<n; i++) {
        dig[i] = s[i]-'0'; 
    }
    int ans=0; 
    for(int i=0; i<n; i++) {
        if (dig[i] == 0) {
            dig[i] = 1; 
            ans = max(ans, f()); 
            dig[i] = 0; 
        }
        if (dig[i] == 1) {
            dig[i] = 0; 
            ans = max(ans, f()); 
            dig[i] = 1; 
        }
    }
    cout<<ans; 
    return 0;
}