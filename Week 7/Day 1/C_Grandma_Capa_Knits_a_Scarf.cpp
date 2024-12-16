#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = n + 1;
    for (int i = 0; i < 26; i++)
    {
        char target = char('a' + i);
        int l = 0, r = n - 1;
        int count = 0;

        while (l <= r)
        {
            if (s[l] == s[r])
            {
                l++;
                r--;
            }
            else if (s[l] == target)
            {
                count++;
                l++;
            }
            else if (s[r] == target)
            {
                count++;
                r--;
            }
            else
            {
                count = n + 1;
                break;
            }
        }

        ans = min(ans, count);
    }

    if (ans == n + 1)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << ans << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
