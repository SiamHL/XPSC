#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int l = 0;
    int r = 0;
    long long ans = 0;
    while (l < n && r < m)
    {
        int cur1 = a[l];

        int count1 = 0;
        int count2 = 0;
        while (l < n && cur1 == a[l])
        {
            l++;
            count1++;
        }
        while (r < m && b[r] < cur1)
        {
            r++;
        }

        while (r < m && b[r] == cur1)
        {
            r++;
            count2++;
        }

        ans += (1ll * count1 * count2);
    }

    cout << ans;

    return 0;
}