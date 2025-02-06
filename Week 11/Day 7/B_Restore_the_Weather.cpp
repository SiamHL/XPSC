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
    vector<pair<ll, ll>> a(n);
    vll b(n);
    rep(i, 0, n)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    rep(i, 0, n)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vll ans(n);

    rep(i, 0, n)
    {
        ans[a[i].second] = b[i];
    }
    each(x, ans)
    {
        cout << x << " ";
    }
    cout << endl;
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