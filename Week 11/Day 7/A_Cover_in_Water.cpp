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
    ll ans = 0, count = 0, total = 0;
    string s;
    cin >> s;
    each(x, s)
    {
        if (x == '.')
        {
            ans++;
            count++;
            total = max(total, count);
        }
        else
        {
            total = max(total, count);
            count = 0;
        }
    }
    if (total >= 3)
    {
        cout << 2 << endl;
    }
    else
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