#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
         int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int score = abs(a[0] - a[1]);

        for (int i = 1; i < n-1; i++) {
            int x = max(abs(a[i]-a[i-1]), abs(a[i]-a[i+1]));
            score = min(score, x);
        }

        score = min(score, abs(a[n-1] - a[n-2]));

        cout << score << endl;
    }

    return 0;
}