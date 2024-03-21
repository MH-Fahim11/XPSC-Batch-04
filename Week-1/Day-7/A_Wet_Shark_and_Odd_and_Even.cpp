#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long int sum[n];
    for (int i = 0; i < n; i++)
    {
        long long int x;
        cin>>x;
        if(i==0) sum[i] = x;
        else sum[i] = x+sum[i-1];
        
    }

    for (int i = n-1; i >= 0; i--)
    {
        if(sum[i]%2==0){
            cout<< sum[i]<< endl; 
            return 0;
        }
       
    }
    cout<<0<< endl;
    return 0;
}