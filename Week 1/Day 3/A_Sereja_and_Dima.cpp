#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int sum1 = 0;
    int sum2 = 0;
    bool turn = true;

    while (!v.empty()) {
        if (v.front() > v.back()) {
            if (turn) {
                sum1 += v.front();
                v.erase(v.begin()); 
            } else {
                sum2 += v.front();
                v.erase(v.begin());
            }
        } else {
            if (turn) {
                sum1 += v.back();
                v.pop_back();
            } else {
                sum2 += v.back();
                v.pop_back();
            }
        }
        turn = !turn;
    }

    cout << sum1 << " " << sum2;
    return 0;
}
