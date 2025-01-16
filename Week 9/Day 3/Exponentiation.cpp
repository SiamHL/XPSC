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

const ll MOD = 1e9 + 7;

void power(ll x, ll n)
{
    ll ans = 1 % MOD;
    while (n)
    {
        if (n & 1)
        {
            ans = (ans % MOD * x % MOD) % MOD;
        }
        x = x * x % MOD;
        n >>= 1;
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
        ll n, x;
        cin >> x >> n;
        power(x, n);
    }

    return 0;
}