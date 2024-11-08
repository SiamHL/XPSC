#include <bits/stdc++.h>
using namespace std;

class compare
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        if (a.second != b.second)
        {
            return a.second<b.second;
        }
        return a.first>b.first;
        
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    queue<int> qu;
    priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq;
    vector<bool> served(q + 1, false);
    int id = 1;

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;

        if (x == 1)
        {
            int m;
            cin >> m;
            pq.push({id, m});
            qu.push(id);
            id++;
        }

        else if (x == 2)
        {
            while (served[qu.front()])
            {
                qu.pop();
            }
            int s;
            if (!qu.empty())
            {
                s = qu.front();
                qu.pop();
                served[s] = true;
                cout << s << " ";
            }
        }
        else
        {
            while (served[pq.top().first])
            {
                pq.pop();
            }
            pair<int, int> h = pq.top();
            pq.pop();
            served[h.first] = true;
            cout << h.first << " ";
        }
    }

    return 0;
}