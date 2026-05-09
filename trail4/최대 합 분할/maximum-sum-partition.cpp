#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9; 
int N; 
vector<int> A; 
int dp[102][200005]; 
int offset; 
int tot;
int C=0; 
int go(int idx, int diff) {
    if (idx >= N) return (diff == 0) ? 0 : -INF; 

    int &ret = dp[idx][diff+offset]; 
    if (ret != -1) return ret; 
    ret = -INF; 

    ret = max(ret, go(idx+1, diff)); 
    ret= max(ret, go(idx+1, diff+A[idx])+A[idx]);
    ret = max(ret, go(idx+1, diff-A[idx])); 

    return ret;  

}
int main() {
    // Please write your code here.
    cin>>N; 
    for(int i=0; i<N; i++) {
        int a; cin>>a; 
        A.push_back(a); 
    }
    offset = accumulate(A.begin(), A.end(), 0); 
    tot = offset;

    memset(dp, -1, sizeof(dp)); 
    cout<<go(0, 0); 

    return 0;
}