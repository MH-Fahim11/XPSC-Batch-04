#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll x[200005], y[200005];

int main() {

    int t;
    cin >> t;
    
    while(t--){
        ll n,q;
        cin >> n >> q;
        
        memset(x, 0, sizeof(x));
        memset(y, 0, sizeof(y));
        ll k, a, l, r, mid, ans;
        for (int i = 1; i <= n; i++) {
            cin >> a;
            x[i] = max(x[i-1], a);
            y[i] = y[i-1] + a;
        }

        for (int i = 1; i <= q; i++) {
            cin >> k;
            l = 1;
            r = n;
            ans = 0;
            while (l <= r) {
                mid = (l + r)/2;

                if (x[mid] <= k) {
                    ans = mid;
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
            cout << y[ans] << " ";
        }
        cout << endl;
    }
}
  			   				  	 	   			  	    	