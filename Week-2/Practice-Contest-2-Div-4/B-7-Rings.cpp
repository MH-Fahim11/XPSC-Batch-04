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
        int n,x;
        cin>>n>>x;
        int sum = (n*x);
        string s = to_string (sum);
        if(s.size()==5 && s[0]!=0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        // cout<<s.size()<<endl;
    }
    
    return 0;
}