#include <bits/stdc++.h>
using namespace std;
int N; 
vector<int> A; 
int dp[102][100006];
int offset; 

int go(int idx, int diff) {
    if (idx == N) return abs(diff); 

    int &ret = dp[idx][diff+offset]; 
    if (ret != -1) return ret; 

    ret = min(go(idx+1, diff+A[idx]), go(idx+1, diff-A[idx])); 
    return ret; 
}

int main() {
    // Please write your code here.
    cin>>N; 
    for(int i=0; i<N; i++) {
        int a; cin>>a; 
        A.push_back(a); 
    }
    memset(dp, -1, sizeof(dp)); 
    offset = accumulate(A.begin(), A.end(), 0); 
    cout<<go(0, 0); 
    return 0;
}