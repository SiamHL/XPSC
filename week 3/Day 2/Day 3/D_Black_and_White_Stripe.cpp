#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    int n, k;
    cin >> n >> k;
    vector<char> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = 0, r = 0, count = 0, sum = 0;

    while (r < n)
    {
        if (v[r] == 'B')
        {
            count++;
        }
        if (r - l + 1 == k)
        {
            sum = max(sum, count);
            if (v[l] == 'B')
            {
                count--;
            }
            l++;
        }
        r++;
    }

    if (sum == k)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << k - sum << endl;
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