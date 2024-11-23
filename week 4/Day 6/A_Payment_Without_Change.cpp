#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    long long int a, b, n, s;
    cin >> a >> b >> n >> s;

    if (s % n <= b && a * n + b >= s)
    {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}