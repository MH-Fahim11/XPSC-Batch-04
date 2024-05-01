#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--){
        ll n;
        cin>>n;
        int x = cbrt(n);
        bool flag=false;

        for (int i=x; i>=1; i--){
            ll p = n-pow(i,3);
            double q = cbrt(p);
            int r = q;
            if (q==r && r!=0){
                flag=true;
                break;
            }
        }

        if (flag){
            cout<<"YES"<<endl;  
        }else{
            cout<<"NO"<<endl;
        }
            
    }
}