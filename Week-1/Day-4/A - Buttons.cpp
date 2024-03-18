#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a,b;
    cin>>a>>b;
    
    int maxCoin=max(a,b);
    if(a>b){
        maxCoin += max(a-1,b);
    }else{
        maxCoin += max(a,b-1);
    }
    
    cout << maxCoin<< endl;
    return 0;
}