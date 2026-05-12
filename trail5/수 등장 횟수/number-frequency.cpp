#include <bits/stdc++.h>
using namespace std;
int N, M; 
unordered_map<int, int> um; 

int main() {
    // Please write your code here.
    cin>>N>>M; 
    for(int i=0; i<N; i++) {
        int a; cin>>a; 
        um[a]++; 
    }
    for(int i=0; i<M; i++) {
        int a; cin>>a; 
        cout<<um[a]<<' ';
    }
    return 0;
}