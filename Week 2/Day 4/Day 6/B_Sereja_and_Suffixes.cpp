#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> d(n);
    unordered_map<int, bool> mp;
    int count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (!mp[v[i]])
        {
            count++;
            mp[v[i]] = true;
        }
        d[i] = count;
    }

    // for(auto k: d)
    // {
    //     cout<<k<<" ";
    // }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        cout<<d[x-1]<<endl;
    }
    
    return 0;
}