#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, K;
    cin >> n >> m >> K;
    int ans = 0;
    vector<int> v(m);
    int x;
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    cin >> x;

    for (auto r : v)
    {
        int d = x ^ r;
        int dif = __builtin_popcount(d);
        // cout<<dif<<" ";
        if (dif <= K)
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}