#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n>> m;
    int arA[n];
    int arB[m];
    for (int i = 0; i < n; i++)
    {
        cin>>arA[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>arB[i];
    }
    
    int i=0, j=0;
    while (i<n && j<m)
    {
        if(arA[i]<arB[j]){
            cout<< arA[i]<< " ";
            i++;
        }else{
            cout<< arB[j]<< " ";
            j++;
        }
    }
    if(i<n){
        while (i<n)
        {
            cout<< arA[i]<< " ";
            i++;
        }
        
    }
    if(j<m){
        while (j<m)
        {
            cout<< arB[j]<< " ";
            j++;
        }
        
    }

    return 0;
}