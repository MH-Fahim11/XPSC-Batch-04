#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int s,t;
    cin>>s>>t;
    int j=0,k=0,x=0;
    for (int i = 0; i <= s; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            for (int k = 0; k <=s; k++)
            {
                if(i+j+k<=s && i*j*k<=t){
                    x++;
                }
            }
            
        }
        
    }
    
    cout<<x<<endl;

    return 0;
}