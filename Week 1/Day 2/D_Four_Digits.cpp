#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string d;
    cin >> d;

    int l = d.length();

    if (l == 1)
    {
        cout << "000";
    }
    else if (l == 2)
    {
        cout << "00";
    }
    else if (l == 3)
    {
        cout << "0";
    }

    cout<<d;

    return 0;
}