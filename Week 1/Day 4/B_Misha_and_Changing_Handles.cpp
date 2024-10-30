#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    unordered_map<string, string> oldName;
    unordered_map<string, string> newName;

    while (n--)
    {
        string old, ne;
        cin>>old>>ne;

        string x;

        if(oldName.count(old)){
            x = oldName[old];
        }
        else{
            x = old;
        }

        oldName[ne] = x;
        newName[x] = ne;

    }

    cout<<newName.size()<<endl;

    for(auto k:newName)
    {
        cout<<k.first<<" "<<k.second<<endl;

    }
    


        return 0;
}