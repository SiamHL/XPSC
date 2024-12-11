#include <bits/stdc++.h>
using namespace std;
vector<int> palindrome;

bool isPalindrome(int x)
{
    string s = to_string(x);
    string t = s;
    reverse(t.begin(), t.end());
    if (s == t)
    {
        return true;
    }
    return false;
}

void palindroms(void)
{

    for (int i = 0; i < (1ll << 15); i++)
    {
        if (isPalindrome(i))
        {
            palindrome.push_back(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    palindroms();
    // cout<<palindrome.size()<<endl;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> count(1e5+1);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            count[v[i]]++;
        }
        
        long long ans = n;
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < palindrome.size(); j++)
            {
                int c = v[i] ^ palindrome[j];
                ans += count[c];
            }
        }
        // cout<<ans<<endl;
        cout << ans / 2 << endl;
    }

    return 0;
}