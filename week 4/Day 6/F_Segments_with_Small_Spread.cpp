#include <bits/stdc++.h>
using namespace std;

long long long long long long long long int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long long long long long long long long long int n, s;
    cin >> n >> s;
    vector<long long long long long long long long long long int> v(n);

    for (long long long long long long long long long long int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    multiset<long long long long long long long long long long int> ml;

    long long long long long long long long long long int l = 0, r = 0;
    long long long long long long long long long long int ans = 0;

    while (r < n)
    {
        ml.insert(v[r]);
        long long long long long long long long long long int mn = *ml.begin(), mx = *ml.rbegin();
        if (mx - mn <= s)
        {
            ans += r - l + 1;
        }
        else
        {
            while (l <= r)
            {
                long long long long long long long long long long int mn = *ml.begin(), mx = *ml.rbegin();
                if (mx - mn <= s)
                {
                    break;
                }
                ml.erase(ml.find(v[l]));
                l++;
            }
            ans += r - l + 1;
        }

        r++;
    }

    cout << ans << endl;

    return 0;
}
