#include <bits/stdc++.h>
using namespace std;
unordered_map<long long int, long long int> di;
unordered_map<long long int, long long int> fi;

int divisor(long long int h)
{
    if (di.find(h) != di.end())
    {
        return di[h];
    }
    if (h <= 1)
    {
        return di[h] = 0;
    }
    else
    {
        for (long long int i = sqrt(h); i >= 1; i--)
        {
            if (h % i == 0)
            {
                if (i == h)
                    continue;
                return di[h] = i;
            }
        }
        return di[h] = 1;
    }
}
int fight(long long int inh)
{
    if (fi.find(inh) != fi.end())
    {
        return fi[inh];
    }
    int count = 0;
    while (1 < inh)
    {
        inh = divisor(inh);
        count++;
    }
    return fi[inh] = count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long int h, k;
        cin >> h >> k;
        long long int mx = 0;
        long long int i = 0;
        while (i <= k)
        {
            mx = max(mx, fight(h * i));
            i *= 2;
        }
        cout << mx << endl;
    }

    return 0;
}