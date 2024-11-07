#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    bool id = true;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] == 'R' && b[i] != 'R') || (b[i] == 'R' && a[i] != 'R'))
        {
            id = false;
        }
    }

    if (id)
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
        /* code */
    }

    return 0;
}