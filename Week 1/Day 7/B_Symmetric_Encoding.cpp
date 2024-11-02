#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    int n;
    string s;
    cin >> n;
    cin >> s;

    set<char> se;
    string r;

    for (auto c : s)
    {
        se.insert(c);
    }

    for (auto c : se)
    {
        r += c;
    }

    unordered_map<char, char> mp;
    int l = r.length();
    for (int i = 0; i < l; i++)
    {
        mp[r[i]] = r[l - 1 - i];
    }

    string x;
    for (auto c : s)
    {
        x += mp[c];
    }

    cout << x << endl;
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