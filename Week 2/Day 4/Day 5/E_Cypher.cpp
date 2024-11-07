#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            if (c == 'D')
            {
                if (v[i] == 9)
                {
                    v[i] = 0;
                }

                else
                {
                    v[i]++;
                }
            }
            else
            {
                if (v[i] == 0)
                {
                    v[i] = 9;
                }
                else
                {
                    v[i]--;
                }
            }
        }
    }

    for (auto k : v)
    {
        cout << k << " ";
    }
    cout << endl;
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