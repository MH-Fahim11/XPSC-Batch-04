#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
	cin >> t;
	while(t--)
	{
        
        int n;
		cin >> n;

		int a[n],b[n];
		for(int i=0; i<n; i++){
            cin >> a[i];
        }
		for(int i=0; i<n; i++){
            cin >> b[i];
        }
		sort(a,a+n);
		sort(b,b+n);

		bool flag = true;
		for(int i=0; i<n; i++){
            if( (b[i]<a[i]) || (b[i]>a[i]+1) ){
               flag=false; 
            } 
        }

		if(flag){
            cout << "YES" << endl;  
        } 
		else cout << "NO" << endl;;
	}
}