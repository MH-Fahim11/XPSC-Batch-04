#include <bits/stdc++.h>
 
using namespace std;
 
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s1 ,s2;
        cin>>n >> s1;
        for (int i = n - 1; i >= 0; i--) {

            if (s1[i] != '0') {
                s2 += (s1[i] - '1') + 'a'; 
            } else {
                
                int num = stoi(s1.substr(i - 2, 2)); 
                s2 += (num - 1) + 'a'; 
                i -= 2; 
            }
        }
        
        reverse(s2.begin(), s2.end());
        cout << s2 << endl;
    }
    return 0;
}