#include <iostream>
using namespace std;
int t,n,i,a[200101],x,ans;

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(i=n;i>=1;i--){
			cin>>x;
			a[i] = x;
		}ans=0,x=1;
		while(x<n){
			if(a[x+1]==a[1]){
				x++;
				continue;
			}
			ans++;
			x*=2;
		}
		cout<<ans<<endl;
	}
	return 0;
} 