#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
    cin>>t;
    while(t--){
		int n;
        cin>>n;

        int a[n],b[n];
		for(int i=0; i<n; i++){
            cin>>a[i];
        }
		for(int i=0; i<n; i++){
            cin>>b[i];
        }

        int dif = 0;
		for(int i=0; i<n; i++){
            dif=max(a[i]-b[i],dif);
        }

        bool flag = true;
		for(int i=0; i<n; i++){
            if(a[i]-b[i] < dif&&b[i]){
                flag=false;
            }
        }

		if(flag&&dif >= 0){
            cout << "YES" << endl;
        }
		else{
           cout << "NO"<< endl; 
        } 
	}
    return 0;
}