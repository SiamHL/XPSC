#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int sum, mul, total = 0;
    cin >> sum >> mul;

    for (int i = 0; i <= sum; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            for (int k = 0; k <= sum; k++)
            {
                if (i + j + k <= sum && i * j * k <= mul)
                {
                    total++;
                }
            }
        }
    }

    cout << total << endl;

    return 0;
}
