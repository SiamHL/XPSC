#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    long long int n, q;
    cin >> n >> q;
    // vector<long long int> v(n);
    map<long long int, long long int> m1;
    map<long long int, long long int> m2;

    for (long long int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        if (m1.find(x) == m1.end())
        {
            m1[x] = i;
        }
        m2[x] = i;
    }

    vector<string> v;

    while (q--)
    {
        long long int a, b;
        cin >> a >> b;

        if (m1.count(a) && m2.count(b) && m1[a] <= m2[b])
        {
            v.push_back("YES");
        }
        else
        {
            v.push_back("NO");
        }
    }

    for (auto k : v)
    {
        cout << k << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}