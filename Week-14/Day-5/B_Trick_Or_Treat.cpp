#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,m;
	    cin >> n >>m;
	    long int arr[n];
	    long int brr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    for(int i=0;i<n;i++){
	        cin >> brr[i];
	    }
	    long long int c1[m]={0};
	    for(int i=0;i<n;i++){
	        c1[arr[i]%m]++;
	    }
	    long long int c2[m]={0};
	    for(int i=0;i<n;i++){
	        c2[brr[i]%m]++;
	    }
	    long int ans=c1[0]*c2[0];
	    for(int i=1;i<m;i++){
	        ans+=(c1[i]*c2[m-i]);
	    }
	    cout <<ans <<endl;
	    
	    
	}
    return 0;
}