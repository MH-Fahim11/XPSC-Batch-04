#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int x,y;
    cin>>x>>y;
    long long int j=x, s=1, i = 1;
    
    while(true)
    {
        j=j*2;
        if(j>=x && j<=y){ 
            s++;
        }
        if(j>y){
            break;
        }
        i++;
    }
    
    cout<<s<<endl;

    return 0;
}