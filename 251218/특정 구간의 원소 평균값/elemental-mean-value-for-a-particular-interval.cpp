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
    int ans=0; 
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            int tmp=0; 
            int len = (j-i)+1; 
            for(int k=i; k<=j; k++) {
                tmp += v[k]; 
            }
            if (tmp%len != 0) continue; 
            int avg = tmp/len; 
            for(int k=i; k<=j; k++) {
                if (v[k] == avg) {
                    ans++; 
                    break; 
                }
            }
        }
    }
    cout<<ans; 
    return 0;
}