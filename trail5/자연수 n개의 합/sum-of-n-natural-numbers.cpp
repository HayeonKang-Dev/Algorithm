#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
ll S;
bool check(ll mid) {
    return (mid*(mid+1)/2) <= S;
}
int main() {
    // Please write your code here
    cin>>S; 
    ll lt=1, rt=2e9; 
    ll ans=0;
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