#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        int ans = 1, cur = 1;
        while (cur < n) {
            ans++;
            cur = cur * 2 + 2;
        }
        cout << ans << '\n';
    }
    return 0;
}
