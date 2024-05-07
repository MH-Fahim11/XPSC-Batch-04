#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        stack<char> st;
        int x = 0;
        for (auto i : s){
            if (!st.empty() && st.top() != i){
                st.pop();
                x++;
            }
            else{
               st.push(i); 
            }  
        }
        if(x % 2 == 0){
            cout<<"Ramos";  
        } 
        else{
            cout<<"Zlatan";
        } 
        cout<<endl;
    }

    return 0;
}