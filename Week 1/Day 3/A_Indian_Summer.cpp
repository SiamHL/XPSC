#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cin.ignore();
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        bool ex = false;
        for (int j = 0; j < v.size(); j++)
        {
            if (s == v[j])
            {
                ex = true;
                break;
            }
        }
        if (!ex)
        {
            v.push_back(s);
        }
    }

    cout << v.size();

    return 0;
}