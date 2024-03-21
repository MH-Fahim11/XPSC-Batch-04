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
        int b[n];
        for (long long int i = 0; i < n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        
        long long int mx= largest(a,n);

        int max_index = find(a, a+n, mx)-a;
        long long int sales=a[max_index]*2;

        for(int i=0; i<max_index;i++){
            sales+=a[i];
        }
        cout<<sales<<endl;
    }
    
    return 0;
}