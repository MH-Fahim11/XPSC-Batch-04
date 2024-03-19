#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
 
void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    
    if ((b + 2) / 3 * 3 > b + c) {
        cout << -1 << endl;
        return;
    }
    
    int ans = a + (b + c + 2) / 3;
    cout << ans << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}