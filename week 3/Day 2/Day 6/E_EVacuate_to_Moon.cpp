#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    long long int n, m, h;
    cin >> n >> m >> h;
    vector<long long int> v(n);
    vector<long long int> p(m);

    for (long long int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (long long int i = 0; i < m; i++)
    {
        cin >> p[i];
    }
    sort(v.begin(), v.end(), greater<long long int>());
    sort(p.begin(), p.end(), greater<long long int>());
    long long int ans = 0;

    for (long long int i = 0; i < min(m, n); i++)
    {
        if (p[i] * h < v[i])
        {
            ans += p[i] * h;
        }
        else
        {
            ans += v[i];
        }
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}