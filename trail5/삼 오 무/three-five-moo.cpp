#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
ll N; 

// 1, 2, 4, 7, 8, 11, 13, 14, 16
ll check(ll mid) {
    ll cnt = mid - (mid/3) - (mid/5) + (mid/15); 
    return cnt; 
}
int main() {
    // Please write your code here.
    cin>>N; 
    ll lt=1, rt=1e18; 
    ll ans=-1; 
    while(lt <= rt) {
        ll mid = (lt + rt) / 2; 
        ll x=check(mid); 
         if (x <N) {
            lt = mid+1; 
            
        }
        else {
            if (x==N) ans = mid;
            rt = mid-1;
        }
    }
    cout<<ans;

    return 0;
}