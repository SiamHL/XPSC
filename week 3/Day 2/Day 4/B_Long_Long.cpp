#include <bits/stdc++.h>
using namespace std;
void solve(void)
{
    long long int n, ans = 0;
    cin >> n;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        ans += abs(v[i]);
    }

    long long int l = 0, r = 0, count = 0;
    while (r < n)
    {
        while (l < n)
        {
            if (v[l] < 0)
            {
                count++;
                l++;
                break;
            }
            l++;
        }
        r = l;
        while (r < n)
        {
            if (v[r] > 0)
            {
                break;
            }
            else
            {
                r++;
            }
        }
        l = r;
    }
    cout << ans << " " << count << endl;
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