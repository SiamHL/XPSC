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
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    vector<int> b({a[n - 1]});
    for (int i = n - 2; i >= 0; --i)
    {
        if (a[i] > b.back())
        {
            b.push_back(a[i] % 10);
            b.push_back(a[i] / 10);
        }
        else
        {
            b.push_back(a[i]);
        }
    }
    cout << (is_sorted(b.rbegin(), b.rend()) ? "YES" : "NO") << '\n';
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