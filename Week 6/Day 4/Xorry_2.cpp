#include <bits/stdc++.h>
using namespace std;

void solve(void)
{
    int x; 
    cin >> x;
    int a = 1;     
    int cnt = 0; 
   
    while (a * 2 <= x)
    {
        a = a * 2;
        cnt++;
    }

    int result = 1;        
    bool flag = false; 

   
    for (int i = cnt - 1; i >= 0; i--)
    {
        if ((x & (1 << i)))
        {                
            flag = true; 
        }
        else
        {
            
            if (flag)
                result = result * 2; 
        }
    }

    cout <<  result << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}