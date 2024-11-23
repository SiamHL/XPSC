#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long long long long long long long int longestKSubstr(string s, long long long long long long long long int k)
    {
        long long long long long long long long int n = s.length(), l = 0, r = 0, ans = -1;
        map<long long long long long long long long int, long long long long long long long long int> mp;

        while (r < n)
        {
            mp[s[r]]++;
            if (mp.size() == k)
            {
                ans = max(ans, r - l + 1);
            }
            else
            {
                while (mp.size() > k &&l <=r)
                {
                    mp[s[l]]--;
                    if (mp[s[l]] == 0)
                    {
                        mp.erase(s[l]);
                    }
                    l++;
                }
            }
            r++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
long long long long long long long long int main()
{
    long long long long long long long long int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long long long long long long long long int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;

        cout << "~" << "\n";
    }
}

// } Driver Code Ends