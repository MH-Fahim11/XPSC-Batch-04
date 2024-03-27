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
        long long int n,k;
        cin>>n>>k;
        // int arr[n];
        long long int sum = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            sum+=x;
        }

        // long long int cp = sum/n;

        if (sum<n){ 
            cout<<"NO"<<endl;
        }
        else{     
            if (sum%n==0){
                cout<<"YES"<<endl;
            }
            else if(k>=1){
                cout<<"YES"<<endl;
                     
            }
            else{
                 cout<<"NO"<<endl;
            }
                
        }
        
        
    }
    
    return 0;
}