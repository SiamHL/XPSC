#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define INF 1e9
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define repd(i, a, b) for (int i = a; i > b; --i)
#define each(x, a) for (auto &x : a)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vll v;
    rep(i, 0, n)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }

    ll q;
    cin >> q;
    while (q--)
    {
        ll k;
        cin >> k;
        ll l = 0;
        ll r = v.size() - 1;
        ll ans = -1;
        
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;

            if (v[mid] == k)
            {
                r = mid-1;
                ans = mid;
                
            }
            else if (v[mid] > k)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        cout << ans+1 << endl;
    }

    return 0;
}
