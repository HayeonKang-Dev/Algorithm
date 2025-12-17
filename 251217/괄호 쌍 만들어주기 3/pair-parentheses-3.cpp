#include <bits/stdc++.h>
using namespace std;
string s; 
int main() {
    // Please write your code here.
    cin>>s; 
    int cnt=0;
    for(int i=0; i<s.size(); i++) {
        if (s[i] == '(') {
            for(int j=i+1; j<s.size(); j++) {
                if (s[j] == ')') cnt++; 
            }
        }
    }
    cout<<cnt; 
    return 0;
}