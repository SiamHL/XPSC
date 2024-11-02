#include <bits/stdc++.h>
using namespace std;

int time(string a)
{
    int t = 2;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i - 1] == a[i])
        {
            t++;
        }
        else
        {
            t += 2;
        }
    }
    return t;
}

void solve(void)
{
    string s;
    cin >> s;
    int mxtime = -1;
    string pass;
    for (int i = 0; i < s.size(); i++)
    {
        for (char c = 'a'; c <= 'z'; c++)
        {
            string newstring = s;
            newstring.insert(i, 1, c);

            int t = time(newstring);

            if (mxtime < t)
            {
                mxtime = t;
                pass = newstring;
            }
        }
    }

    cout << pass << endl;
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