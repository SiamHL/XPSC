#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, t;
    cin>>s>>t;
    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] != t[i])
        {
            count++;
        }
        // cout<<s[i]<<" "<<t[i]<<endl;
    }

    cout<<count;
    
    
    return 0;
}