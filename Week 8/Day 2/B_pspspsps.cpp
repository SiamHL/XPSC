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

void solve(void)
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if (s[0] == 's')
        s[0] = '.';
    if (s[n - 1] == 'p')
        s[n - 1] = '.';
    bool P = false;
    bool S = false;
    each(x, s)
    {
        switch (x)
        {
        case 'p':
            P = true;
            break;
        case 's':
            S = true;
            break;
        default:
            break;
        }
    }

    if (S && P)
    {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}