#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = n; i >= 1; i--)
    {
        v.push_back(i);
    }

    for (auto k : v)
    {
        cout << k << " ";
    }
    cout << endl;
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