#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
ll N, M; 
vector<ll> v; 
bool check(ll mid) {
    ll prv = v[0]; 
    ll cnt=1; 
    ll ret = INT_MAX;
    for(int i=1; i<N; i++) {
        if (v[i] - prv < mid) continue; 
        cnt++; 
        prv = v[i]; 
        ret = min(ret, v[i] - prv); 
    }
    return (cnt >= M && ret <= mid); 
}
int main() {
    // Please write your code here.
    cin>>N>>M; 
    for(int i=0; i<N; i++) {
        ll a; cin>>a; 
        v.push_back(a); 
    }
    sort(v.begin(), v.end()); 
    // 거리의 최댓값을 parametric search 
    ll ans = 0; 
    ll lt = 0, rt = *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end()); 
    while(lt <= rt ){
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