#include <bits/stdc++.h>
using namespace std;

long long int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin >> n;
    vector<long long int> v(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (long long int mask = 0; mask < (1 << n); mask++)
    {
        long long int sum = 0;
        for (long long int k = 0; k < n; k++)
        {
            if ((mask >> k) & 1)
            {
                sum += v[k];
            }
            else
            {
                sum -= v[k];
            }
        }

        if (sum % 360 == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}