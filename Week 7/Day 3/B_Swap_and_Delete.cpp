#include <bits/stdc++.h>
using namespace std;

void done(void)
{
    string s;
    cin >> s;

    vector<int> cnt(2, 0);
    for (char c : s)
    {
        cnt[c - '0']++;
    }

    for (int i = 0; i <= s.size(); i++)
    {
        if (i == s.size() || cnt[1 - (s[i] - '0')] == 0)
        {
            cout << s.size() - i << endl;
            break;
        }
        cnt[1 - (s[i] - '0')]--;
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
        done();
    }

    return 0;
}
