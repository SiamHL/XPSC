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
        v[i]--;
    }

    for (int i = 0; i < n; i++)
    {
        if (v[v[i]] == i)
        {
            cout << 2 << endl;
            return;
        }
    }

    cout << 3 << endl;
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