#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int c0 = 0, c1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || s[i] != s[i - 1])
        {
            if (s[i] == '0')
            {
                c0++;
            }

            else
            {
                c1++;
            }
        }
    }

    cout << min(c0, c1) << endl;
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
