//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    int n=txt.size();
        int i=0;
        int k=pat.size();

        unordered_map<char,int>mpTxt,mpPat;

        for(int i=0;i<pat.size();i++){
            mpTxt[txt[i]]++;
            mpPat[pat[i]]++;
        }
        int ans=0;
        while(i<=n-k){
            if(mpTxt==mpPat){
                ans++;   
            } 
            mpTxt[txt[i]]--;
            if(mpTxt[txt[i]]==0){
               mpTxt.erase(txt[i]); 
            } 
            i++;
      
            mpTxt[txt[k+i-1]]++;
        }
        return ans;
    
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends