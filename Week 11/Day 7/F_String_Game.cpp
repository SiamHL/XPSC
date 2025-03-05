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
    string s, t;
    cin >> s >> t;
    ll n = s.size();
    ll m = t.size();
    vll v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
        v[i]--;
    }
    ll l = 0, r = n - 1, mid, ans = 0;
    bool found = false;

    auto ok = [&](ll x)
    {
        vector<bool> bad(n);
        rep(i, 0, x + 1)
        {
            bad[v[i]] = true;
        }
        ll j = 0;
        rep(i, 0, n)
        {
            if (bad[i] == false && s[i] == t[j])
            {
                j++;
            }
            if (j == m)
            {
                found = true;
                return true;
            }
        }
        return false;
    };

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    cout << (found ? ans + 1 : ans);

    return 0;
}