#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> scale;
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    reverse(v.begin(), v.end());
    int count = 0;

    for (auto k : v)
    {
        if (mp[k] > 0)
        {
            break;
        }
        count++;
        mp[k]++;
    }
    cout << v.size() - count << endl;
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