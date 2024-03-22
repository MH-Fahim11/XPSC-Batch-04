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
        int n;
        string s;

        cin>>n>>s;

        if (n!=5){
          cout<<"NO"<<endl;  
        } 
        else {
            string sorted_name="Timru";
            sort(s.begin(),s.end());
            bool flag=true;

            for(int i=0;i<5;i++){
                if(s[i]!=sorted_name[i]){
                   flag=false; 
                } 
            }

            if(flag){
              cout<<"YES"<<endl;  
            } 
            else{
              cout<<"NO"<<endl;  
            } 
        }
    }
    return 0;
}
