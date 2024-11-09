#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    int n;
    cin >> n;
    // priority_queue <int> even;
    // priority_queue<int> odd;
    vector<pair<int, int>> r;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        v[i] = i + 1;
    }

    for (int i = 1; i < n; i++)
    {
        int a = v.back();
        v.pop_back();

        int b = v.back();
        v.pop_back();
        r.push_back({a, b});

        v.push_back(ceil((a + b) / 2.0));
    }

    for (auto k : v)
    {
        cout << k << endl;
    }

    for (auto k : r)
    {
        cout << k.first << " " << k.second<< endl;
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