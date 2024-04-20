#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> a(n);
        long long int mn=INT_MAX,sum=0,ncnt=0;
    
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]<0){
               ncnt++; 
            } 
            a[i]=abs(a[i]);
            mn=min(mn,a[i]);
            sum+=a[i];
        }
        if(ncnt%2!=0)
        {
            sum-=mn*2;
        }
        cout<<sum<<endl;
    }
    return 0;
}
