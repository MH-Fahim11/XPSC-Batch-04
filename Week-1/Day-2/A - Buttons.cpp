#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a,b;
    cin>>a>>b;
    
    int maxCoin=max(a,b);

    maxCoin += max(a-1,b);
    cout << maxCoin<< endl;
    return 0;
}