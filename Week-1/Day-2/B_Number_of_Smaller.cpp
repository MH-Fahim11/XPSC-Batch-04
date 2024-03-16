#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n>> m;
    int a[n];
    int b[m];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    int r[m]; 
    int i=0;
    for (int j = 0; j < m; j++)
    {
        while (i<n && a[i]< b[j])
        {
            i++;
        }
        r[j] =i;
    }
    for (int x : r)
    {
       cout<<x<<" ";
    }
    cout<< "\n";

    return 0;
}