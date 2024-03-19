#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long int a, b, m;
    cin >> a >> b >> m;
    m++;
    
    long long int ans = (m + a - 1) / a + (m + b - 1) / b;
    cout << ans << "\n";
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