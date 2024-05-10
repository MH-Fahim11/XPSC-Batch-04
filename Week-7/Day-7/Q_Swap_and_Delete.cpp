#include<bits/stdc++.h>
using namespace std;
 

 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
	cin>>t;
	while(t--){
        string s;
		cin>>s;
        int n=s.size(),k=s.size(),x=0,y=0;

		for(int i=0;i<n;i++){
			if(s[i]=='0'){
                x++;
            } 
			else{
                y++;
            } 
		}

		for(int i=0;i<n;i++){
			if(s[i]=='0'){
                 y--;
            }
			else{
                x--;
            } 
			if(x<0||y<0){
                break;
            } 
			k--;
		}
		cout<<k<<endl;
	}
	return 0;
} 
	  	 		 			  			 	 		 	    				