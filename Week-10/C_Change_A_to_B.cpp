#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b,k;
        cin>>a>>b>>k;
        int count =0;
        while(true){
            
            if(b/k>=a && b%k==0){
                b=b/k; count++;
            }
            else if(b%k==0){
                count+=b-a;
                break;
                
            }
            else{
                count+=b%k;
                b-=(b%k);
            }
        }
        cout<<count<<endl;
    
    }
    return 0;
}


