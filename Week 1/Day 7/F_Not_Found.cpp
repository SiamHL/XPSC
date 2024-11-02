#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    unordered_map<char, int> mp;
    vector<char> v;

    for (auto c : s)
    {
        mp[c]++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        if (mp.count(i) == 0)
        {
            v.push_back(i);
        }
    }

    sort(v.begin(), v.end());

    if (v.empty())
    {
        cout << "None" << endl;
    }
    else
    {
        cout << v[0] << endl;
    }
    return 0;
}