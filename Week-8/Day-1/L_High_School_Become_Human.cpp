#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double a, b;
    cin >> a >> b;
 
 
    if (b * log(a) > a * log(b)) {
        cout << ">";
    } else if (b * log(a) < a * log(b)) {
        cout << "<";
    } else {
        cout << "=";
    }
 
    return 0;
}