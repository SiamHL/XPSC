#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    int n;
    cin >> n;
    string t = "Timur";
    sort(t.begin(), t.end());
    string s;
    cin>>s;
    if(t.size() != s.size())
    {
        cout<<"NO"<<endl;
        return;
    }
    sort(s.begin(), s.end());

    if(t==s)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
        solve();
    }

    return 0;
}