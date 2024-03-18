#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c;
    cin>>a>>b>>c;
    int i=1;
    while (true)
    {
        int x =c*i;
        if(x >= a && x <= b){
            cout<<x<<endl;
            break;
        }
        if(x>b){
            cout<<"-1"<<endl;
            break;
        }
        i++;
    }
    
    return 0;
}