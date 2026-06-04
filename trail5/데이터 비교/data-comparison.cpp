#include <bits/stdc++.h>
using namespace std;
int N, M; 
unordered_map<int, int> A; 
int main() {
    // Please write your code here.
    cin>>N; 
    for(int i=0; i<N; i++) {
        int a; 
        cin>>a; 
        A[a] = 1; 
    }
    cin>>M; 
    while(M--) {
        int a; 
        cin>>a; 
        if (A.count(a)) {
            cout<<1<<' ';
        }
        else cout<<0<<' ';
    }
    return 0;
}