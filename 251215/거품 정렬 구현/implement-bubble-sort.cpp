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

    bool flag =false; 
    while(1) {
        flag = false; 
        for(int i=0; i<n-1; i++) {
            if (v[i] > v[i+1]) {
                int tmp = v[i]; 
                v[i] = v[i+1]; 
                v[i+1] = tmp; 
                flag = true; 
            }
        }
        if (!flag) break; 
    }
    for(int a : v) {
        cout<<a<<' ';
    }
    return 0;
}