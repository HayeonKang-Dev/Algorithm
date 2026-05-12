#include <bits/stdc++.h>
using namespace std;
int N, M; 
vector<int> A; 
bool check(int mid) {
    int cnt=0; 
    for(int i=0; i<N; i++) {
        cnt += A[i]/mid; 
    }
    return cnt >= M; 
}
int main() {
    // Please write your code here.
    cin>>N>>M; 
    for(int i=0; i<N; i++) {
        int a; cin>>a; 
        A.push_back(a); 
    }
    // K가 탐색 대상
    int lt=1, rt=accumulate(A.begin(), A.end(), 0); 

    int ans = 0; 
    while(lt <= rt) {
        int mid = (lt + rt) / 2; 
        if (check(mid)) {
            ans = max(ans, mid); 
            lt = mid+1; 
        }
        else rt = mid-1;
    }
    cout<<ans;
    return 0;
}