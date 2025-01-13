#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define INF 1e9
#define rep(i, a, b) for (long long int i = a; i <= b; ++i)
#define repd(i, a, b) for (int i = a; i > b; --i)
#define each(x, a) for (auto &x : a)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    vll d;
    rep(i, 1, sqrt(n))
    {
        if (n % i == 0)
        {
            d.push_back(i);
            if (i != n / i)
            {
                d.push_back(n / i);
            }
        }
    }
    sort(d.begin(), d.end());
    if (k > d.size())
    {
        cout << -1 << endl;
    }
    else
        cout << d[k -1] << endl;

    return 0;
}