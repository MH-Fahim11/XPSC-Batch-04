#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t,c;
	cin>>t;
	for(int c(0); c < t; c++){
		int n;
		cin>>n;
		ll ans = 0;
		map<int,int> m;
		for(int i = 0;i<n;i++){
			int d;
			cin>>d;
			int b = log2(d);
			ans += m[b];
			m[b]++;
		}
		cout<<ans<<'\n';
	}
}
