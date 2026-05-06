#include <bits/stdc++.h>
using namespace std;
int dp[1002][2][25]; // idx번째에 dir측에 있고 지금까지 이동을 cnt번 했을 때 얻을 수 있는 최대 수정의 개수 
int s[1002]; 
int N, K; 
int go(int idx, int dir, int cnt) {
    if (idx == N) return 0; 
    int &ret = dp[idx][dir][cnt]; 
    if (ret != -1) return ret; 
    ret=0;

    ret= max(ret, go(idx+1, dir, cnt)+ ((s[idx]==dir) ? 1 : 0)); 
    if (cnt < K) ret = max(ret, go(idx+1, !dir, cnt+1)+ ((s[idx] != dir) ? 1 : 0)); 
    return ret; 
}

int main() {
    // Please write your code here.
    cin>>N>>K;
    string S; 
    cin>>S; 
    memset(dp, -1, sizeof(dp)); 
    for(int i=0; i<N; i++) {
        if (S[i] == 'L') s[i] = 0; 
        else s[i]= 1; 
    }
    cout<<go(0, 0, 0); 
    return 0;
}