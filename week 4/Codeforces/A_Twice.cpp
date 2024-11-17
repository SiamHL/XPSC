#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    int n;
    cin >> n;
    vector<int> v(n);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    int ans = 0;
    for (auto k : mp)
    {
        ans += k.second / 2;
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