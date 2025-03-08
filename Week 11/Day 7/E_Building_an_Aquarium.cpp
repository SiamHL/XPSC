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

void solve(void)
{
    ll n, w;
    cin >> n >> w;
    vll v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
    }
    auto ok = [&](ll z)
    {
        ll x = 0;
        each(k, v)
        {
            if (k < z)
            {
                x += z - k;
            }
        }
        return x;
    };

    ll ans = 0, l = 0, r = 1e10, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid) <= w)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}