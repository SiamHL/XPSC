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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll a = 0, b = 0, c = 0, d = 0;
    each(k, s)
    {
        if (k == 'A')
            a++;
        else if (k == 'B')
            b++;
        else if (k == 'C')
            c++;
        else if (k == 'D')
            d++;
    }
    ll ans = min(n, a) + min(n, b) + min(c, n) + min(d, n);
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