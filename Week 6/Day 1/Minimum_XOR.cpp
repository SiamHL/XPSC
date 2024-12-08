#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    int n, sum = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum = (sum ^ v[i]);
    }

    int ans = sum;
    for (auto k : v)
    {
        ans = min(ans, sum ^ k);
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