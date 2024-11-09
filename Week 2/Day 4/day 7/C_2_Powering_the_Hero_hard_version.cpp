#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    int n;
    cin >> n;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    priority_queue<long long int> pq;
    long long sum = 0;

    for (auto k : v)
    {
        if (k != 0)
        {
            pq.push(k);
        }
        else
        {
            if (!pq.empty())
            {
                sum += pq.top();
                pq.pop();
            }
        }
    }

    cout << sum << endl;
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