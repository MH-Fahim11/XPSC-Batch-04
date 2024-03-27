#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        
        int mx =max(x,y);
        int mn =min(x,y);

        int st = 0;
        for (int i = mn; i <mx; i++)
        {
            st++;
        }
        
        cout<<st+x+y-1<<endl;
        
    }
    
    return 0;
}