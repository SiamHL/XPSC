#include <bits/stdc++.h>
using namespace std;

long long int what(vector<long long int> &v, long long int n)
{
    long long int ans = 0;
    long long int z = 0;
    for (long long int i = n - 1; i >= 0; i--)
    {
        if (v[i] == 0)
        {
            z++;
        }
        else
        {
            ans += z;
        }
    }
    return ans;
}

void done(void)
{
    long long int n;
    cin >> n;
    vector<long long int> v(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long int ans = what(v, n);
    for (long long int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            v[i] = 1;
            ans = max(ans, what(v, n));
            v[i] = 0;
            break;
        }
    }

    for (long long int i = n - 1; i >= 0; i--)
    {
        if (v[i] == 1)
        {
            v[i] = 0;
            ans = max(ans, what(v, n));
            break;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin >> t;
    while (t--)
    {
        done();
    }

    return 0;
}