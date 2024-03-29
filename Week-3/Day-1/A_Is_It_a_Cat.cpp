#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        // string cat = tolower(s);
        string cat = "";
 
        for(int i=0; i<n; i++){
            if(tolower(s[i]) != tolower(s[i+1])){
                cat += tolower(s[i]);
            }
        }
        if(cat == "meow"){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
        
    }
    
    return 0;
}