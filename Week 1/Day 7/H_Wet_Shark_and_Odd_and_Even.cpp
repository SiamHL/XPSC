#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector <long long int> v;
    for (int i = 0; i < n; i++)
    {
        long long int x;
        cin>>x;
        v.push_back(x);
    }

    long long int sum = 0;
    long long int minodd = LLONG_MAX;
    for(auto k:v)
    {
        if(k%2 != 0 ) 
        {
            minodd = min(k,minodd);
        }
        sum +=k;
    }
    if(sum%2 != 0)
    {
        cout<<sum-minodd<<endl;

    }
    else{
        cout<<sum<<endl;
    }
    
    return 0;
}