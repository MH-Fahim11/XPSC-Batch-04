#include <bits/stdc++.h>
using namespace  std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>> t;
    while(t--){
        int n;
        int a,b,c;
        long long ans=0;
        map<tuple<int,int,int>,int>mp;
        cin>>n>>a>>b;
        for(int i=2;i<n;i++){
            cin>>c;
            ans+=mp[{-1,b,c}]++;
            ans+=mp[{a,-1,c}]++;
            ans+=mp[{a,b,-1}]++;
            ans-=3*mp[{a,b,c}]++;
            a=b;b=c;
        }
        cout<<ans<<endl;
    }
    return 0;
}