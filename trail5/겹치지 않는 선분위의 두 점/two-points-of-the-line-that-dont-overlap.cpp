#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
int N, M; 
vector<pair<ll, ll>> v; 

bool check(ll mid) {
    // 거리가 mid 충족되었을 때 카운트+1
    int cnt=1; 
    ll prv = v[0].first; 
    int idx=0; 
    while(cnt < N) {
        ll nxt = prv + mid; 
        while(idx < M && nxt > v[idx].second) idx++; 
        if (idx == M) return false; 
        prv = max(nxt, v[idx].first); 
        cnt++; 
    }
    return true; 
}
int main() {
    // Please write your code here.

    // mid = 가장 가까운 두 점의 거리가 mid 성립하는가? 
    cin>>N>>M; 
    for(int i=0; i<M; i++) {
        ll a, b; 
        cin>>a>>b; 
        v.push_back({a, b}); 
    }
    sort(v.begin(), v.end()); 
    ll lt=1, rt=v[M-1].second - v[0].first; 
    ll ans = 0; 
    while(lt <= rt) {
        ll mid = (lt + rt) / 2; 
        if (check(mid)) {
            ans = max(ans, mid); 
            lt = mid+1; 
        }
        else rt = mid-1; 
    }
    cout<<ans; 

    return 0;
}