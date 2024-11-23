#include <bits/stdc++.h>
using namespace std;

long long long long long long int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long long long long long long long int n, k;
    cin >> n >> k;

    vector<long long long long long long long long int> v(n);
    for (long long long long long long long long int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long long long long long long long int ans = 0, l = 0, r = 0;
    map<long long long long long long long long int, long long long long long long long long int> mp;

    while (r < n)
    {
        mp[v[r]]++;
        if (mp.size() <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (mp.size() > k && l < r)
            {
                mp[v[l]]--;
                if (mp[v[l]] == 0)
                {
                    mp.erase(v[l]);
                }
                l++;
            }
            if (mp.size() <= k)
            {
                ans += r - l + 1;
            }
        }
        r++;
    }

    cout << ans << endl;

    return 0;
}