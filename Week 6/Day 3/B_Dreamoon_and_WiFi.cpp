#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, t;
    cin >> s >> t;
    int fixPos = 0;
    for (auto k : s)
    {
        if (k == '+')
            fixPos++;
        else
            fixPos--;
    }
    int cur = 0;
    int q = 0;
    for (auto k : t)
    {
        if (k == '+')
            cur++;
        else if (k == '-')
            cur--;
        else
            q++;
    }
    int correct = 0;
    for (int mask = 0; mask < (1 << q); mask++)
    {
        int ad = cur;
        for (int bit = 0; bit < q; bit++)
        {
            if ((1 << bit) & mask)
                ad++;
            else
                ad--;
        }
        if (ad == fixPos)
        {
            correct++;
        }
    }
    double ans = correct * 1.0 / (1 << q);
    cout << fixed << setprecision(12) << ans << endl;

    return 0;
}
