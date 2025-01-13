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
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    bool one = false, zero = false;
    each(x, s)
    {
        if (x == '0')
        {
            zero = true;
        }
        else
            one = true;
    }

    // cout << one << " " << zero << endl;

    if (one == true && zero == true)
    {
        cout << 1 << endl;
    }
    else
        cout << n<< endl;
    return;
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