#include <iostream>
using namespace std;

int a[200005],b[200005];
int main() {
    int t, n;
    cin>>t;
    while (t--)
    {
        cin>>n;
		int cnt=0,ans=0;
		for(int i=1;i<=n;++i){
		int x;
		cin>>x;
		if(x%2==0){
			a[cnt++]=i;
		} 
		else b[ans++]=i;
		}
		if(ans>=3){
			cout<<"YES"<<endl;
			cout<<b[0]<<" "<<b[1]<<" "<<b[2]<<"\n";
		}
		else if(ans>=1&&cnt>=2){
				cout<<"YES"<<endl;
			cout<<b[0]<<" "<<a[0]<<" "<<a[1]<<"\n";
		}
		else cout<<"NO"<<endl;

    }
       
    return 0;
}