#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    int n, x;
    cin >> n >> x;

    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i != x && (i + x) % 2 == 0)
        {
            count++;
        }
    }
    cout << count << endl;
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