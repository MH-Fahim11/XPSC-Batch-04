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
        int n,x;
        cin>>n>>x;
        
        int t2=9999;
        while(t2--)
        {
            if(n==x){
               break; 
            }
            else if(n>x)
            {
                n--;
                x++;
            }
            else
            {
                n+=3;
                x--;
            }
        }
        if((n==x))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}