#include <bits/stdc++.h> 
using namespace std;

bool isPalindrome(vector<int> v,int n, int x) 
{
	int i = 0, j = n - 1;
	while (i < j)
	{
		if (v[i] == x){
            i++;
        }	
		else if (v[j] == x) {  
			j--;
        } 
		else if (v[i] != v[j]) {  
			return false;
        }   
		else{
           i++, j--; 
        }		
	}
	return true; 
}
int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n; 
        cin >> n;
		vector<int>v(n);
	    for (int i = 0; i < n; ++i){
            cin >> v[i];
        }
		        	
        bool flag = true; 
         
        for (int i = 0; i < n - 1 - i; ++i){
            if (v[i] != v[n - 1 - i])
        	{
        	    flag = isPalindrome(v,n, v[i]) or isPalindrome(v,n, v[n - 1 - i]);
        		break; 
        	}
        }
        
        if (flag){
            cout << "YES" << endl;
        }		
        else{
            cout << "NO" << endl;
        }
        		                   
    }
    return 0; 
}