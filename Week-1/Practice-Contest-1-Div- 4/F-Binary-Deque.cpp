#include <bits/stdc++.h>
using namespace std;

int sum(vector<int>&a){
    int s=0;
    for (int i = 0; i <a.size(); i++)
    {
        s+=a[i];
    }
    return s;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n,s;
        cin>>n>>s;
        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        while(sum(a)>s){
            if(a[0]==1){
                a.erase(a.begin());
            }else if(a.end() == 1){
                a.erase(a.begin());
            }
        }
        
        
        
        
        
        
    }
    
    return 0;
}