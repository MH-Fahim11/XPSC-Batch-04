#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long int a[n];
    long long int sum;
    for (int i = 0; i < n; i++)
    {
        long long int x;
        cin>>x;
        a[i]=x;
        if(i==0) sum = x;
        else sum = x+sum;
        
    }
    sort(a,a+n);
    for (int i = 0; i < n; i++)
    {
        if(sum%2==0){
           break;
        }else if(a[i]%2!=0){
            sum-=a[i];
        }
    }
    if(sum>0){
        cout<<sum<< endl;
    }else{
        cout<<0<< endl;
    }
    return 0;
}