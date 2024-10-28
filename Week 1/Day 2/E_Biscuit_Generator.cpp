#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s, b, t;
    cin >> s >> b >> t;

    int sum = 0;
    int x = s;

    while (x <= t)
    {
        sum += b;
        x += s;
    }

    cout << sum;

    return 0;
}
