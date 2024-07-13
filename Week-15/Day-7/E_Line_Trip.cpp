#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int t;
    cin>>t;
    while (t--){
        int n,x ,p,q=0,ans=0;
        cin>>n>>x;
        while(n--){
            cin>>p;
            ans= max( ans,(p-q));
            q=p;
        }
        cout<< max(ans,2*(x-q)) <<endl;
    }
    return 0;
}