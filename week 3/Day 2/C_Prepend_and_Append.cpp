#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    int n;
    cin >> n;
    string s;

    cin>>s;

    int l = 0;
    int r = n - 1;
    int ans = n;

    while (l <= r)
    {
        if (s[l] == s[r])
        {
            break;
        }
        else
        {
            ans -= 2;
            l++;
            r--;
        }
    }

    cout << ans << endl;
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