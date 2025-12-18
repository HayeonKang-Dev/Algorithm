#include <bits/stdc++.h>
using namespace std;
int n, m, num[102], cpy[102]; 
vector<int> A, B; 
int main() {
    // Please write your code here.
    cin>>n>>m; 
    for(int i=0; i<n; i++) {
        int a; 
        cin>>a; 
        A.push_back(a); 
    }
    for(int i=0; i<m; i++) {
        int a; 
        cin>>a; 
        B.push_back(a); 
        num[a]++; 
    }
    int ans=0; 
    for(int i=0; i<=n-m; i++) {
        memcpy(cpy, num, sizeof(cpy)); 
        bool flag = true; 
        for(int j=i; j<i+m; j++) {
            if (cpy[A[j]] == 0) {
                flag = false; 
                break; 
            }
            cpy[A[j]]--; 
        }
        if (flag) ans++; 
    }
    cout<<ans; 
    return 0;
}