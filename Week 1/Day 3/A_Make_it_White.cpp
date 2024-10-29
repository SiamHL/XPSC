#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int bs = -1;
        int bl = -1;

        for (int i = 0; i < n; i++)
        {
            char x;
            cin >> x;
            if (x == 'B')
            {
                if (bs == -1)
                {
                    bs = i;
                }
                bl = i;
            }
        }
        cout<<bl-bs+1<<endl;
    }

    return 0;
}
