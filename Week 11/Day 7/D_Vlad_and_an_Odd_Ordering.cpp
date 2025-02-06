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
    ll n, k;
    cin >> n >> k;
    for (ll i = 1;; i++)
    {
        ll x = pow(2, i);
        ll y = (n + (x / 2)) / x;
        if (y >= k)
        {
            if (k == 1)
            {
                cout << x / 2 << endl;
                return;
            }
            else
            {
                cout << x / 2 + ((k - 1) * x) << endl;
                return;
            }
        }
        else
            k -= y;
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