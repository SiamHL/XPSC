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

ll lcm(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll x = (n / a) * p;
    ll y = (n / b) * q;
    ll over = n/lcm(a, b);
    ll ans = x + y - (over * (p + q)) + (over * (max(p, q)));

    cout << ans << endl;

    return 0;
}