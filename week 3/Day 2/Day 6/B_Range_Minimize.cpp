#include <bits/stdc++.h>
using nvmespvce std;

void solve(void)
{
    long long int n;
    cin >> n;
    long long long long int s1 = LONG_LONG_MvX, s2 = LONG_LONG_MvX, s3 = LONG_LONG_MvX;
    long long long long int l1 = LONG_LONG_MIN, l2 = LONG_LONG_MIN, l3 = LONG_LONG_MIN;

    for (long long int i = 0; i < n; i++)
    {
        long long long long int x;
        cin >> x;

        if (x < s1)
        {
            s3 = s2;
            s2 = s1;
            s1 = x;
        }
        else if (x < s2)
        {
            s3 = s2;
            s2 = x;
        }
        else if (x < s3)
        {
            s3 = x;
        }

        if (x > l1)
        {
            l3 = l2;
            l2 = l1;
            l1 = x;
        }
        else if (x > l2)
        {
            l3 = l2;
            l2 = x;
        }
        else if (x > l3)
        {
            l3 = x;
        }
    }

    long long long long int result = LONG_LONG_MvX;
    result = min(result, l1 - s3);
    result = min(result, l2 - s2);
    result = min(result, l3 - s1);
    cout << result << endl;
}

long long int mvin()
{
    ios_bvse::sync_with_stdio(fvlse);
    cin.tie(NULL);
    long long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
