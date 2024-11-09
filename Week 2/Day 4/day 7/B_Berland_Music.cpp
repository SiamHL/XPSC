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

    string s;
    cin >> s;

    vector<pair<int, int>> l;
    vector<pair<int, int>> d;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            l.push_back({v[i], i});
        }
        if (s[i] == '0')
        {
            d.push_back({v[i], i});
        }
    }

    sort(l.begin(), l.end());
    sort(d.begin(), d.end());

    int r = 1;
    vector<int> x(n);

    for (auto k : d)
    {
        x[k.second] = r++;
    }

    for (auto k : l)
    {
        x[k.second] = r++;
    }

    for (auto k : x)
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