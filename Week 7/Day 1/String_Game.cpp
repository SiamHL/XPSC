#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    int n;
    cin >> n;
    int count, one = 0, zero = 0;
    string v;
    cin >> v;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == '1')
            one++;
        else
            zero++;
    }
    count = min(zero, one);
    // cout << one << zero << endl;

    // cout << count << endl;
    if (count % 2 == 0)
        cout << "Ramos" << endl;
    else
        cout << "Zlatan" << endl;
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