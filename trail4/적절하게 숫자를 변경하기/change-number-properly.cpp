#include <bits/stdc++.h>
using namespace std;
int dp[505][5][102]; // idx번째 수가 n, 인접한 두 숫자가 다른 횟수가 k일때 최대 유사도 
int N, M; 
vector<int> A; 
int go(int idx, int num, int cnt) {
    if (idx == N) return 0; 
    int &ret = dp[idx][num][cnt]; 
    if (ret != -1) return ret; 
    ret=0; 
    for(int i=1; i<=4; i++) {
        int nxtCnt = cnt + (i != num); 
        if (nxtCnt > M) continue; 
        ret = max(ret, go(idx+1, i, nxtCnt) + ((A[idx] == i) ? 1 : 0)); 
    }
    return ret; 
}
int main() {
    // Please write your code here.
    cin>>N>>M; 
    A.resize(N); 
    for(int i=0; i<N; i++) {
        cin>>A[i]; 
    }
    memset(dp, -1, sizeof(dp)); 
    int ans=0; 
    for(int i=1; i<=4; i++) {
        ans = max(ans, go(1, i, 0) + (A[0] == i)); 
    }
    cout<<ans; 

    return 0;
}