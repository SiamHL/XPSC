#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long long int l = 0;
    int x = 0;
    while (n)
    {
        if (n % 10 == 7)
        {
            x += (1 << l);
        }
        l++;
        n = n / 10;
    }

    // cout<<x<<endl;

    for (int i = 1; i < l; i++)
    {
        x += (1 << i);
    }

    cout << x + 1 << endl;

    return 0;
}