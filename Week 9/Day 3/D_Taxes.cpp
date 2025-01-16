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

bool isPrime(ll n)
{
    if (n == 1)
    {
        return false;
    }
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;

    if (isPrime(n))
    {
        cout << 1 << endl;
    }
    else if (n % 2 == 0)
    {
        cout << 2 << endl;
    }
    else
    {
        if (isPrime(n - 2))
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3;
        }
    }
    return 0;
}