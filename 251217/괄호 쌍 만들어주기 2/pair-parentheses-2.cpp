#include <bits/stdc++.h>
using namespace std;
string s; 
int main() {
    // Please write your code here.
    cin>>s; 
    int n = s.size(); 
    int cnt=0;
    for(int i=0; i<n-1; i++) {
        if (s[i] == '(' && s[i+1]=='(') {
            for(int j=i+2; j<n-1; j++) {
                if (s[j] == ')' && s[j+1]==')') cnt++; 
            }
        }
    }
    cout<<cnt; 
    return 0;
}