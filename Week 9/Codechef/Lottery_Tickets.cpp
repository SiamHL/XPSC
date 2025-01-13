#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define INF 1e9
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define repd(i, a, b) for (int i = a; i > b; --i)
#define each(x, a) for (auto &x : a)


void solve() {
    ll n;
    cin >> n;
    vll v(n);
    for (ll i = 0; i < n; ++i) {
        cin >> v[i];
    }

    ll x = v[0];
    sort(v.begin(), v.end());

    ll l = 1, r = 1e6;

    if (x == v[0]) {
        r = v[0] + (v[1] - v[0]) / 2;
    } else if (x == v[n - 1]) {
        l = v[n - 1] - (v[n - 1] - v[n - 2]) / 2;
    } else {
        auto it = find(v.begin(), v.end(), x);
        ll idx = it - v.begin();
        r = x + (v[idx + 1] - x) / 2;
        l = x - (x - v[idx - 1]) / 2;
    }
    cout << max(0LL, r - l + 1) << endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}