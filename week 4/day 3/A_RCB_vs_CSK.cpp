#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    if ((a - b) >= 18)
    {
        cout << "RCB";
    }
    else
    {
        cout << "CSK";
    }
    return 0;
}