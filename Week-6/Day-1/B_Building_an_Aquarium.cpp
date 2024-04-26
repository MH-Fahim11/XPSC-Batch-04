#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        int ans;
        ans = a[0];
        for(int i = 1; i < n; i++){
            if(x >= (a[i] - a[i - 1]) * i){
                x -= (a[i] - a[i - 1]) * i;
                ans += a[i] - a[i - 1];
            } else {
                ans += x / i;
                x = 0;
            }
        }
        if(x){
            ans += x / n;
        }
        cout << ans << endl;
    }
    return 0;
}