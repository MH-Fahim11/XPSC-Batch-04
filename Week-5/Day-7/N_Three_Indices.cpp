#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--){

        long long int n;
        cin >> n;
 
        long long int a[n + 1];

        for (long long int i = 1; i <= n; i++){
            cin >> a[i];
        }
            
        bool flg = true;
 
        for (long long int i = 2; i <= n - 1; i++){
                if (a[i] > a[i - 1] && a[i] > a[i + 1]){
                    flg = false;
                    cout << "YES" << endl;
                    cout << i - 1 << " " << i << " " << i + 1 << endl;
                    break;
                }
        }
        if (flg){
            cout << "NO" << endl;
        }
    }
    return 0;
}