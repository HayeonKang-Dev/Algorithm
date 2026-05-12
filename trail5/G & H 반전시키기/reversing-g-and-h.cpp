#include <bits/stdc++.h>
using namespace std; 
int N; 
string A; 
string B; 

int main() {
    // Please write your code here.
    cin>>N>>A>>B; 
    int ans=0; 
    bool flag = false; 
    for(int i=0; i<N; i++) {
        if (A[i] != B[i]) {
            if (flag) continue; 
            ans++; flag = true; 
        }
        else {
            flag = false; 
        }
    }
    cout<<ans; 
    return 0;
}