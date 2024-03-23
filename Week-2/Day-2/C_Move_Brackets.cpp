#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>> t;

    while (t--)
    {
        int n;
        string s;
        cin>>n>>s;
        stack<char> st;
        
        for (int i = 0; i < n; i++)
        {
            char ch=s[i];
            if(ch=='('){
                st.push(ch);
            }
            else if(!st.empty()){
                if(ch==')'){
                    st.pop();
                }    
            }
        }
        
        cout << st.size() << endl;   
    }
    

    return 0;
}