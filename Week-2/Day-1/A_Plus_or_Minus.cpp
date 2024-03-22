#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int x,y,s;

        cin >> x >> y >> s;
        if(x+y==s){
            cout << '+' << endl;
        }else{
            cout << '-' << endl;
        }
    }
    
    return 0;
}