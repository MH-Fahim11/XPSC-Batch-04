#include <bits/stdc++.h>
using namespace std;

 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c;
        cin >> a >> b >> c;

        if(b > c){
            if(a < b){
              cout << 1 << endl;  
            } else if(a > b){
              cout << 2 << endl;  
            } else{
              cout << 3 << endl;  
            } 
        }
        else{
            if((a-1) < (c-b)+(c-1)){
                cout << 1 << endl;
            }else if((a-1)>(c-b)+(c-1)){
               cout << 2 << endl; 
            } 
            else{
                cout << 3 << endl;
            } 
        }
    }
    return 0;
}