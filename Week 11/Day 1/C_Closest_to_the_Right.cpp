#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<long long>
#define rep(i, a, b) for (int i = a; i < b; ++i)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, q;
    cin >> n >> q;
    vll v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
    }

    // sort(v.begin(), v.end());

    rep(i, 0, q)
    {
        ll x, ans = n;
        cin >> x;
        ll l = 0, r = n - 1, mid;
        bool found = false;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (x > v[mid])
            {
                l = mid + 1;
            }
            else
            {
                ans = mid;
                r = mid - 1;
            }
        }
        cout << ans+1 << endl;
    }

    return 0;
}
