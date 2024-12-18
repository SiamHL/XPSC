#include <bits/stdc++.h>
using namespace std;

void done(void)
{
    long long int n, q;
    cin >> n >> q;
    vector<long long int> v(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    set<int> s;

    while (q--)
    {
        long long int x;
        cin >> x;
        if (s.count(x))
        {
            continue;
        }
        s.insert(x);
        for (long long int j = 0; j < n; j++)
        {
            if (v[j] % (1 << x) == 0)
            {
                v[j] = v[j] + (1 << (x - 1));
            }
        }
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
    long long int t;
    cin >> t;
    while (t--)
    {
        done();
    }

    return 0;
}
