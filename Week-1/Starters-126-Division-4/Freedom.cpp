#include <bits/stdc++.h>
using namespace std;
long long int largest(int arr[], int n)
{
    return *max_element(arr, arr + n);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int ans=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(a[i]*a[j]==((a[i]+a[j])+(a[i]-a[j]))){
                    ans++;
                }
            }
            
        }
        cout<<ans<<endl;
        
    }
    
    return 0;
}