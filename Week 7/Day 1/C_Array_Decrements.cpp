#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    int n;
    cin >> n;
    vector<long long int> a(n);
    vector<long long int> b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int dif = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (b[i] != 0)
        {
            if (a[i] - b[i] < dif)
            {
                dif = a[i] - b[i];
            }
        }
    }
    if (dif < 0)
    {
        cout << "NO" << endl;
        return;
    }
    if (dif == INT_MAX)
    {
        cout << "YES" << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 0)
        {
            if (a[i] > dif)
            {
                cout << "NO" << endl;
                return;
            }
        }
        if (dif < a[i] - b[i])
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
    return;
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
