#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int now=-a[i][j];
                for(int k=0;k<n;k++){
                    int d=abs(i-k);
                    if(j>=d)now+=a[k][j-d];
                    if(j+d<m)now+=a[k][j+d];    
                }
                ans=max(ans,now);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}