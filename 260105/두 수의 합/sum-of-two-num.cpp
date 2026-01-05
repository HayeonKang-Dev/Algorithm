#include <bits/stdc++.h>
using namespace std;

int n, k;
unordered_map<int, int> mp;
vector<int> v;

int main() {
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        mp[a]++;
        if (mp[a] == 1) v.push_back(a);
    }

    sort(v.begin(), v.end());

    long long ans = 0;
    for (int x : v) {
        int y = k - x;
        if (x > y) break;
        if (mp.find(y) == mp.end()) continue;

        if (x == y)
            ans += 1LL * mp[x] * (mp[x] - 1) / 2;
        else
            ans += 1LL * mp[x] * mp[y];
    }

    cout << ans;
    return 0;
}
