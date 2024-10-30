#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {

        int x;
        unordered_map <string, int> m1;
        vector <string> v1;
        vector <string> v2;
        vector <string> v3;
        
        cin>>x;

        for (int i = 0; i < x; i++)
        {
            string c;
            cin>>c;
            v1.push_back(c);
            m1[c]++;
            
        }
        for (int i = 0; i < x; i++)
        {
            string c;
            cin>>c;
            v2.push_back(c);
            m1[c]++;
        }
        for(int i = 0; i < x; i++)
        {
            string c;
            cin>>c;
            v3.push_back(c);
            m1[c]++;
        }
        int sum1 = 0, sum2 = 0, sum3 = 0;
        for(auto k:v1)
        {
            if(m1[k] == 3){
                continue;
            }
            else if(m1[k] == 2){
                sum1+=1;
            }
            else{
                sum1+=3;
            }
        }
        for(auto k:v2)
        {
            if(m1[k] == 3){
                continue;
            }
            else if(m1[k] == 2){
                sum2+=1;
            }
            else{
                sum2+=3;
            }
        }
        for(auto k:v3)
        {
            if(m1[k] == 3){
                continue;
            }
            else if(m1[k] == 2){
                sum3+=1;
            }
            else{
                sum3+=3;
            }
        }

        cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
        
      
    }
    
    
    return 0;
}