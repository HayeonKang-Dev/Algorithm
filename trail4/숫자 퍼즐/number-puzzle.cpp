#include <bits/stdc++.h>
using namespace std;
int N, M, K; 
// 수열복원? 
vector<vector<int>> prv; 

void go(int idx, int sum, int num, vector<int> &v) {
    if (prv.size() > K) return; 
    if (idx == N ) {
        if (sum == M) prv.push_back(v); 
        return; 
    }
    for(int i=num; i<=M; i++) {
        if (sum+i > M ) break; 
        v.push_back(i); 
        go(idx+1, sum+i, i, v); 
        v.pop_back(); 
        
    }
}
int main() {
    // Please write your code here.
    cin>>N>>M>>K; 
    vector<int> v; 
    go(0, 0, 1, v); 

    for(int a : prv[K-1]) {
        cout<<a<<' ';
    }
    return 0;
}