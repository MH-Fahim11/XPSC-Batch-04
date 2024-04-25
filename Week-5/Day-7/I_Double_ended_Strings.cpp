#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
    cin >> t;
	while(t--){
		string a,b;
		cin >> a >> b;
		int x = a.size(), y = b.size();
		int m = 0;
		for(int i=0;i<x;i++){
			for(int j=i;j<x;j++){
				if(b.find(a.substr(i,j-i+1)) != string::npos){
					m = max(m, j-i+1);
				}
			}
		}
		cout << (x + y - 2*m) << endl;
	}
    return 0;
}