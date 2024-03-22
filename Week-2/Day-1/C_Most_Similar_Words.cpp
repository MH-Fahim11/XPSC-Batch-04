#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t ;
    cin>> t ;
    while(t--)
    {
        int n , m ;
        cin>>n>>m;
        string a [n];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>a[i];
        }

        int ans = INT_MAX ;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i + 1 ; j < n ; j++)
            {
                int c = 0 ;
                for(int k = 0 ; k < a[j].length() ; k++)
                {
                    c += abs(a[i][k] - a[j][k]);
                }
                ans = min(ans , c);
            }
        }
        cout<<ans<<endl;
    }
}
