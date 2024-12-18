#include <bits/stdc++.h>
using namespace std;

void done(void)
{
    long long int n, q;
    cin >> n >> q;
    vector<long long int> v(n);
    set<long long int> s;
    long long int mex = 0;
    long long int sum = (n * (n + 1)) / 2;
    long long int cur = 0;

    for (long long int i = 0; i < n; i++)
    {
        cin >> v[i];
        cur += v[i];
    }
    mex = sum - cur;

    q = q % (n + 1);
    v.push_back(mex);
    for (long long int i = 0; i < n; i++)
    {

        cout << v[(i - q + n + 1) % (n + 1)] << " ";
    }

    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin >> t;
    while (t--)
    {
        done();
    }

    return 0;
}
