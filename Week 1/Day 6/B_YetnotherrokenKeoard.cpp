#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    string s;
    getline(cin, s);
    vector<int> ci;
    vector<int> si;

    vector<bool> valid(s.size(), true);
    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == 'b')
        {
            if (!si.empty())
            {
                valid[si.back()] = false;
                si.pop_back();
            }
            valid[i] = false;
        }
        else if (s[i] == 'B')
        {
            if (!ci.empty())
            {
                valid[ci.back()] = false;
                ci.pop_back();
            }
            valid[i] = false;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            ci.push_back(i);
        }
        else
        {
            si.push_back(i);
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (valid[i])
        {
            cout << s[i];
        }
    }
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        solve();
    }

    return 0;
}