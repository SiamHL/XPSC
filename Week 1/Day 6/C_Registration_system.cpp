#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    unordered_map <string, int> s;
    vector <string> v;

    for (int  i = 0; i < n; i++)
    {
        string x;
        cin>>x;
        v.push_back(x);
    }
    for(auto u:v)
    {
        if(s.count(u) == 0)
        {
            cout<<"OK"<<endl;
            s[u]++;
        }
        else 
        {
            cout<<u<<s[u]<<endl;
            s[u]++;
        }
        
        
    }

    return 0;
}