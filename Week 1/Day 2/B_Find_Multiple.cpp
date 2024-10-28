#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin>>a>>b>>c;

    if(b<c && c!=0){
        cout<<-1;
        return 0;

    }
    bool flag = false;
    for (int i = a; i <=b; i++)
    {
        if(i%c == 0){
            cout<<i;
            flag = true;
            break;
        }
    }

    if(!flag){
        cout<<-1;
    }
    
    
    return 0;
}