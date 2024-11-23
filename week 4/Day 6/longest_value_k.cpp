#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long int lenOfLongestSubarr(vector<long long int>& arr, long long int k) {
        long long int n = arr.size();
        vector<long long long long int> p(n);
        p[0] = arr[0];
        for (long long int i = 1; i < n; i++) {
            p[i] = arr[i] + p[i - 1];
        }

        long long int ans = 0;
        map<long long long long int, long long int> mp;

        for (long long int i = 0; i < n; i++) {
            if (p[i] == k) {
                ans = max(ans, i + 1);
            }

            auto it = mp.find(p[i] - k);
            if (it != mp.end()) {
                ans = max(ans, i - it->second);
            }

            if (mp.find(p[i]) == mp.end()) {
                mp[p[i]] = i;
            }
        }
        return ans;
    }
};

long long int main() {
    long long int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<long long int> arr;
        long long int k;
        string inputLine;

        getline(cin, inputLine);
        stringstream ss(inputLine);
        long long int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore();

        Solution solution;
        cout << solution.lenOfLongestSubarr(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}
