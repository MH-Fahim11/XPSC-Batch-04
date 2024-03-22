#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t ;
    cin>> t ;
    while(t--)
    {
        int n ;
        cin>>n;
        int a[n];
        map<int,int> mp;
        for(int i = 0 ; i < n ; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }

        // for(auto i : mp)
        // {

        //     cout<< i.first<< " " << i.second<< endl;
        // }
        // cout<<endl;

        int mx = INT_MIN;
        for(auto x:mp)
        {
           mx = max(mx,x.second);
        }

        int ans = 0;
        int ts = n;
        while(ts>0)
        {
            if(ts==n){
                if(n==mx){
                    break;
                }
                ts-=mx;
                ans = n-mx;   
            }

            ts-=mx;
            ans++;
            mx*=2;
        }
 
        cout<<ans<<endl;
    }
}
