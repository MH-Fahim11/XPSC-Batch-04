#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        if(s[0]=='a'||s[1]=='b'||s[2]=='c'){
            cout<<"YES"<<endl;
        }
        else{
          cout<<"NO"<<endl;}  
        } 

    return 0;
}