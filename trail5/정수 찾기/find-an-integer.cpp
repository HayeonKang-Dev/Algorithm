#include <bits/stdc++.h>
using namespace std;
int N; 
unordered_map<int, int> A; 
int M; 
int main() {
    // Please write your code here.
    cin>>N; 
    for(int i=0; i<N; i++) {
        int a; cin>>a; 
        A[a] = 1;
    }
    cin>>M; 
    while(M--) {
        int a; cin>>a; 
        cout<<A.count(a)<<'\n';
    }
    return 0;
}