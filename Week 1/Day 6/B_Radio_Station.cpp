#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin>>n>>m;
    unordered_map <string, string>  mp;
    vector <pair<string, string>> v;
    for (int i = 0; i < n; i++)
    {
        string a,b;
        cin>>a>>b;
        mp[b] = {a};
    }

    for (int i = 0; i < m; i++)
    {
        string x, y;
        cin>>x>>y;
        y.erase(y.size()-1);
        v.push_back({x,y});
    }

    for ( auto p : v)
    {
        cout<<p.first<<" "<<p.second<<";"<<" "<<"#"<<mp[p.second]<<endl;
    }
    

    return 0;
}