

#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t;
    while (t--)
    {
        int n,x;
        cin >> n >> x;
        string s;
        cin >> s;
        if(n==1){
            cout<< "YES"<< endl;
        }else if(n==2){
            if(s[0]==s[1]){
                cout<< "YES"<< endl;
            }
            else if(x==1){
                cout<< "YES"<< endl;
            }
            else{
                cout<< "NO"<< endl;
            }
        }
    }
    
    return 0;
}