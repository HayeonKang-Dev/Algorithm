#include <bits/stdc++.h>
using namespace std;
vector<string> v; 
int N; 
int main() {
    // Please write your code here.
    cin>>N; 
    for(int i=0; i<N; i++) {
        string s; cin>>s; 
        v.push_back(s); 
    }
    sort(v.begin(), v.end(), [](string &a, string &b) {
        return (a+b) > (b+a); 
    }); 
    string ans = ""; 
    for(string a: v) ans += a; 
    cout<<ans; 
    return 0;
}