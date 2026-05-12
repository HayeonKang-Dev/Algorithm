#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
ll N, K; 

ll check(ll mid) {
    // mid가 몇 번째 숫자인지 반환
    ll cnt=0; 
    for(ll i=1; i<=N; i++) {
        cnt += min(N, mid/i); 
    }
    return cnt; 

}

int main() {
    // Please write your code here.
    cin>>N>>K; 
    // 대각선에 있는 수는 한개만, 다른 수는 모두 두개씩 
    // x가 몇 번째 숫자인지 알려주기
    ll lt=1, rt=min(1000000000LL, N*N); 
    ll ans=-1; 
    while(lt <= rt) {
        ll mid = (lt + rt) / 2; 
        ll x = check(mid); 
        if (x >= K) {
            rt= mid-1;
            ans = mid;
        }
        else {
            
            lt = mid+1; 
        }
    }
    cout<<ans; 
    return 0;
}