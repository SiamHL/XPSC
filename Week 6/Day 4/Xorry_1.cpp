#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    int x, y = 0, z = 0;
    cin >> x;
    for (int i = __lg(x); i >= 0; i--)
    {
        if ((x >> i) & 1)
        {
            y = (1 << i) & x;
            break;
        }
    }
    z = x ^ y;

    cout << z << " " << y << endl;
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