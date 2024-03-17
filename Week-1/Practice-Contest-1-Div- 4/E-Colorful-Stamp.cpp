#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int>& a, pair<string, int>& b) {
    return a.second < b.second;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int flag=1;
        for (int i = 0; i < n-1; i++)
        {
            if((s[i]=='B'&&s[i+1]=='R')||(s[i]=='R'&&s[i+1]=='B')){
                flag=-1;   
            }

        }
        if(flag==1){
            cout<< "YES"<<endl;
        }
        else{
            cout<< "NO"<<endl;

        }
        
    }
    
    return 0;
}