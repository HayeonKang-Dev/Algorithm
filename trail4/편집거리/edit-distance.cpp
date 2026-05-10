#include <bits/stdc++.h>
using namespace std;

string A, B; 
int dp[1002][1002]; 
int N, M; 

int go(int i, int j) {
    if (i==0) return j; 
    if (j==0) return i; 

    int &ret = dp[i][j]; 
    if (ret != -1) return ret; 

    if (A[i-1] == B[j-1]) {
        ret = go(i-1, j-1); 
    }
    else {
        ret = 1 +  min({go(i-1, j), go(i, j-1), go(i-1, j-1)}); 
    }
    return ret; 
}

int main() {
    // Please write your code here.
    cin>>A>>B; 
    N = A.size(); 
    M = B.size(); 
    memset(dp, -1, sizeof(dp)); 
    cout<<go(N, M); 
    return 0;
}