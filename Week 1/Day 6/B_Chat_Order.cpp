#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin>>x;
        v.push_back(x);
        
    }
    reverse(v.begin(), v.end());

    unordered_map <string, int> mp;
    

    for(auto k :v)
    {
        if(mp[k] == 0)
        {
            cout<<k<<endl;
            mp[k]++;
        }

    }

    
    
    return 0;
}