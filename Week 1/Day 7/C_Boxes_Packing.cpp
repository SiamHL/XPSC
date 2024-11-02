#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    vector<long long int> v;
    for (int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    vector<long long int> box;

    for (auto k : v)
    {
        if (box.empty())
        {
            box.push_back(k);
        }
        else
        {
            bool ne = true;
            for (int j = 0; j < box.size(); j++)
            {
                if (box[j] > k)
                {
                    box[j] = k;
                    ne = false;
                    break;
                }
            }

            if (ne)
            {
                box.push_back(k);
            }
        }
    }

    // for(auto l:box)
    // {
    //     cout<<l<<" ";
    // }

    cout << box.size();

    return 0;
}