#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        long long a,b, j;
        cin >> a;
        b=sqrt(a);

        for(j=2;j*j<=b;j++){
            if(b%j==0) break;
        } 

        if( (j*j>b) && (b*b==a) && (a>1) ){
            cout<< "YES"<<endl;
        }else{
            cout<< "NO"<<endl;
        }
        
    }
    return 0;
}