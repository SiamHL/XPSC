#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    string a, b;
    cin >> a >> b;
    int q = 0, p = 0;

    for (auto k : a)
    {
        if (k == 'X')
        {
            q += 1;
        }
        else if (k == 'S')
        {
            q *= -1;
            q--;
        }
        else if (k == 'L')
        {
            q++;
        }
    }
    for (auto k : b)
    {
        if (k == 'X')
        {
            p += 1;
        }
        else if (k == 'S')
        {
            p *= -1;
            p --;
        }
        else if (k == 'L')
        {
            p++;
        }
    }

    // cout<<q<<" "<<p;

    if (q > p)
    {
        cout << ">" << endl;
    }
    else if (q < p)
    {
        cout << "<" << endl;
    }
    else
    {
        cout << "=" << endl;
    }
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