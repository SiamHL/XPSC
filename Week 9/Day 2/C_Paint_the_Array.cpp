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

void solve()
{
    ll n;
    cin >> n;
    vll v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
    }
    ll g1 = 0, g2 = 0;
    for (int i = 0; i < n; i += 2)
    {
        g1 = __gcd(g1, v[i]);
    }
    for (int i = 1; i < n; i += 2)
    {
        g2 = __gcd(g2, v[i]);
    }

    bool flag = true;

    for (int i = 1; i < n; i += 2)
    {
        if (v[i] % g1 == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << g1 << endl;
    }
    else
    {
        flag = true;
        for (int i = 0; i < n; i += 2)
        {
            if (v[i] % g2 == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << g2 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
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