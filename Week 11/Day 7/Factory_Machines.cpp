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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, t;
    cin >> n >> t;
    vll v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
    }

    auto ok = [&](ll seconds)
    {
        ll count = 0;
        rep(i, 0, n)
        {
            count +=  (seconds/v[i]);
            if(count>=t)
            return true;
        }
        return false;
    };

    ll l = 1, r = 1e18, ans, mid;
    while (l <= r)
    {
        mid = l + (r-l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;

    return 0;
}