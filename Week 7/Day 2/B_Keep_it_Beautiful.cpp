#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> ans;
    int mark = INT_MIN;
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i == 0)
        {
            ans.push_back(1);
            mark = v[i];
        }
        else
        {
            if (!flag)
            {
                if (v[i] >= mark)
                {
                    ans.push_back(1);
                    mark = v[i];
                }
                else if (v[i] <= v[0])
                {
                    ans.push_back(1);
                    mark = v[i];
                    flag = true;
                }
                else
                {
                    ans.push_back(0);
                }
            }
            else
            {
                if (v[i] >= mark && v[i] <= v[0])
                {
                    ans.push_back(1);
                    mark = v[i];
                }
                else
                {
                    ans.push_back(0);
                }
            }
        }
    }

    for (auto k : ans)
    {
        cout << k;
    }
    cout << endl;
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
