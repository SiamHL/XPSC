#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    long long long long int n;
    cin >> n;
    vector<long long long long int> v(n);
    vector<char> ch(n);
    vector<long long long long int> p(n);
    for (long long long long int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (long long long long int i = 0; i < n; i++)
    {
        cin >> ch[i];
    }
    p[0] = v[0];

    for (long long long long int i = 1; i < n; i++)
    {
        p[i] = v[i] + p[i - 1];
    }

    long long long long int l = 0, r = n - 1, ans = 0;

    while (r > l)
    {
        while (l < n && ch[l] == 'R')
        {
            l++;
        }
        while (r >= 0 && ch[r] == 'L')
        {
            r--;
        }
        if (l < r)
        {
            long long long long int x = 0;
            if (l > 0)
            {
                x = p[l - 1];
            }
            ans += p[r] - x;
            l++;
            r--;
        }
    }

    cout << ans << endl;
}

long long int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long long long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
