#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> d(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            d[i] = 0;
        }
        else
        {
            d[i] = abs(a[i]-b[i])+1;
        }
    }

    sort(d.begin(), d.end());

    int y = 0;
    for (int i = 0; i < n / 2 + 1; i++)
    {
        y += d[i];
        // cout<<d[i]<<" ";
    }

    if (y <= x)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}