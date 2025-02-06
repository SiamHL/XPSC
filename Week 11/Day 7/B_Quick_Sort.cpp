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
    vll v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
    }

    if(is_sorted(v.begin(), v.end()))
    {
        cout<<0<<endl;
        return;
    }
    ll o = 0;
    rep(i, 0, n)
    {
        if (v[i] == o + 1)
        {
            o++;
        }
    }
    ll bug = n - o;
    ll ans = (bug + k - 1) / k;
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