#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        set<int> st;

        for(int i = 0; i < n; i++){
            int a;
            cin>>a;
            st.insert(a);
        }

        int x = n - st.size();

        // cout<< n <<" "<<st.size()<<endl;

        if(x%2 == 1){
            cout<<st.size()-1<<endl;
        } 
        else{
          cout<<st.size()<<endl;  
        } 
    }
    
    return 0;
}
	    		  	  			     	   		 		 	