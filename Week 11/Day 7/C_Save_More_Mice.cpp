#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define rep(i, a, b) for (int i = a; i < b; ++i)

void solve() {
    ll n, k;
    cin >> n >> k;
    vll v(k);
    rep(i, 0, k) cin >> v[i];

    sort(v.rbegin(), v.rend());

    auto ok = [&](ll m) {
        ll dist = 0;
        rep(i, 0, m) {
            if (dist >= v[i]) return false;
            dist += (n - v[i]);
        }
        return true;
    };

    ll l = 0, r = k, ans = 0;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (ok(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
