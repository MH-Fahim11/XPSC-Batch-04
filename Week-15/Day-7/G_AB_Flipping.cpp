#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
	cin>>t;
	while(t--){
        int m,n;
        string s;

		cin>>m;
		cin>>s;
		n=0;
		while(m&&s[m-1]=='A'){
            m--;
        }
		while(n<=s.size()-1&&s[n]=='B'){
            n++;
        }
		cout<<max(m-n-1,0)<<endl;
	}
    return 0;
}