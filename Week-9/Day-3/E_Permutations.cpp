#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    int x = n-1;

    if (n == 2 || n == 3) {
      cout << "NO SOLUTION";
      return 0;
    }

    while(x > 0) {
      cout << x << " ";
      x -= 2;
    }

    x = n;

    while(x > 0) {
      cout << x << " ";
      x -= 2;
    }


    return 0;
}