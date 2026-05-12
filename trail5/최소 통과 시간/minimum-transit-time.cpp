#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
ll N, M; 
vector<ll> v; 

bool check(ll mid) {
    // mid 시간 내에 모든 물건을 통과시킬 수 있는가 의 여부 
    ll cnt=0; 
    for(ll i=0; i<M; i++) {
        cnt += mid / v[i]; 
    }
    return cnt >= N; 

}

int main() {
    // Please write your code here.
    cin>>N>>M; 
    for(ll i=0; i<M; i++) {
        ll a; cin>>a; 
        v.push_back(a); 
    }
    // N개의 물건을 통로 M개에 나눠서 넣을 때 최소 시간 
    // 통과시키는 시간 
    // 몇 분일 때 모든 물건을 통과시킬 수 있을까? 
    ll lt=1, rt=LLONG_MAX; 
    ll ans=LLONG_MAX; 
    while(lt <= rt) {
        ll mid = (lt + rt) / 2; 
        if(check(mid)) {
            ans = min(ans, mid); 
            rt = mid-1; 
        }
        else lt = mid+1; 
    }
    cout<<ans; 
    return 0;
}