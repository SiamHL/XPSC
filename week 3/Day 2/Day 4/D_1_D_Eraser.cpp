#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    int n, k;
    cin >> n >> k;
    vector<char> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ans = 0;
    int l = 0, r = 0;

    while (l < n)
    {
        if (v[l] == 'B')
        {
            ans++;
            l += k;
        }
        else
        {
            l++;
        }
    }

    cout << ans << endl;
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