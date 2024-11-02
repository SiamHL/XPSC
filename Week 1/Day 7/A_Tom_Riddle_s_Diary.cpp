#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    vector<string> v;

    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        v.push_back(x);
    }
    for (auto k : v)
    {
        if (mp[k] == 0)
        {
            cout << "NO" << endl;
            mp[k]++;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}