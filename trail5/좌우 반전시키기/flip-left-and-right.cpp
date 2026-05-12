#include <bits/stdc++.h>
using namespace std;
int N; 
int A[102]; 
void flip(int idx) {
    for(int i=-1; i<=1; i++) {
        A[idx+i] = (A[idx+i] == 0) ? 1 : 0; 
    }
}
int main() {
    // Please write your code here.
    cin>>N; 
    for(int i=0; i<N; i++) cin>>A[i]; 
    int ans=0; 
    for(int i=1; i<N; i++) {
        if (A[i-1] == 0) {
            flip(i); 
            ans++; 
        }
    }
    for(int i=0; i<N; i++) {
        if (A[i] != 1) { cout<<-1; return 0;}
    }
    cout<<ans; 
    return 0;
}