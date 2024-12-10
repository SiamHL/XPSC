#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    long long int n;
    cin >> n;

    deque<long long > ans;

    for (long long int k = 0; k <= __lg(n); k++)
    {
        if ((n >> k) & 1)
        {
            if (n - (1ll << k) > 0)
                ans.push_front(n - (1ll << k));
        }
    }
    ans.push_back(n);
    cout << ans.size() << endl;
    for (auto k : ans)
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
        solve();
    }

    return 0;
}