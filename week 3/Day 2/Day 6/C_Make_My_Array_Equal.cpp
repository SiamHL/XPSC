#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    bool flag = true;
    long long int n;
    cin >> n;
    long long long long int sum = 0;
    vector<long long long long int> v;
    for (long long int i = 0; i < n; i++)
    {
        long long long long int x;
        cin >> x;
        v.push_back(x);
        sum += x;
    }
    sort(v.begin(), v.end());
    // for(auto k: v)
    // {
    //     cout<<k<<" ";
    // }

    if (n == 2)
    {
        // cout << v[0] << " " << v[1];
        if (v[0] == 0 || v[1] == 0)
        {
            flag = true;
        }
        else if (v[1] != v[0])
        {
            flag = false;
        }
    }
    if(n> 2)
    {
        for (long long int i = 0; i < n-1; i++)
        {
            if(v[i] != v[i+1])
            {
               if(v[i] == 0 || v[i+1]== 0)
               {
                continue;
               }
               else
               {
                flag = false;
               }
            }
        }
        
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

long long int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}