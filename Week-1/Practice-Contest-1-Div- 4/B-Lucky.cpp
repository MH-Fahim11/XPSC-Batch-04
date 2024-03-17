#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;

        int i=0,j=3,firstSum=0,lastSum=0;
        while (i<3)
        {
            firstSum+=s[i];
            lastSum+=s[j];
            i++;
            j++;
        }

        if(firstSum==lastSum){
            cout<< "YES"<< endl;
        }else{
            cout<< "NO"<< endl;
        }
        

    }
    
    return 0;
}