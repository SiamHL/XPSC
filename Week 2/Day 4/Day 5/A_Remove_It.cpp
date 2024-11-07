#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n >> x;

    vector<long long int> v;
    for (int i = 0; i < n; i++)
    {
        long long int k;
        cin >> k;
        if (k != x)
        {
            v.push_back(k);
        }
    }
    for (auto p : v)
    {
        cout << p << " ";
        
    }

    return 0;
}