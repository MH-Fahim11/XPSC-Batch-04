#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int mx=0,x=0;
        long long ans=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            ans+=max(0,mx-a[i]);
            x=max(x,mx-a[i]);
            mx=max(mx,a[i]);
        }
        cout<<ans+x<<endl;
    }

    return 0;
}