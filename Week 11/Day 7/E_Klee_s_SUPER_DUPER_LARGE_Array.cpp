#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define INF 1e9 + 10
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define repd(i, a, b) for (int i = a; i > b; --i)
#define each(x, a) for (auto &x : a)

void solve(void)
{
    ll n, k;
    cin >> n >> k;
    ll l = 0, r = n, mid, cur = 1;

    auto ok = [&](ll med)
    {
        long long val1 = (med + k - 1 + k) * med / 2; // Fixed 'med' usage
        long long val2 = (k + n - 1 + k) * n / 2 - val1;
        return val1 - val2;
    };

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        ll diff = ok(mid);
        if (diff < 0)
        {
            cur = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    ll ans = min(abs(ok(cur)), abs(ok(cur + 1)));

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
