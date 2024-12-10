#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    if (s[0] == '1' || s == t)
    {
        cout << "YES" << endl;
        return;
    }

    int p = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            p = i;
            break;
        }
    }

    if (p == -1)
    {
        cout << "NO" << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (t[i] == '1')
        {
            if (i < p)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}