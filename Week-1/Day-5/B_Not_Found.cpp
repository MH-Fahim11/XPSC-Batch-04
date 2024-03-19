#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string S;
    cin >> S;
    map<char, int> count;

    for (char c : S) {
        count[c]++;
    }
    for (char c = 'a'; c <= 'z'; c++) {
        if (count.find(c) == count.end()) {
            cout << c << endl;
            return 0;
        }
    }

    cout << "None" << endl; 
    
    return 0;
}
