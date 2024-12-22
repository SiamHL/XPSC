#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i]--;
    }

    int bad = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % k != i % k)
        {
            bad++;
            // cout << v[i] << " " << i << endl;
        }
    }
    if (bad == 0)
    {
        cout << 0 << endl;
    }
    else if (bad == 2)
    {
        cout << 1 << endl;
    }
    else
    cout << -1 << endl;
    
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