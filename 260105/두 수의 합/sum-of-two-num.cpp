#include <bits/stdc++.h>
using namespace std;

long long n, k;
unordered_map<long long, long long> mp;
vector<long long> v;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;
        mp[a]++;
        if (mp[a] == 1) v.push_back(a);
    }

    sort(v.begin(), v.end());

    long long ans = 0;
    for (long long x : v) {
        long long y = k - x;
        if (x > y) break;
        if (mp.find(y) == mp.end()) continue;

        if (x == y)
            ans += mp[x] * (mp[x] - 1) / 2;
        else
            ans += mp[x] * mp[y];
    }

    cout << ans;
    return 0;
}
