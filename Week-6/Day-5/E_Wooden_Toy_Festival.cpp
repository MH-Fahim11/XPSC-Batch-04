#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int l = 0, r = 1e9;

        while(l < r){
            int m = l + (r - l) / 2;
            int midL = a[0] + m;
            int midR = a[n-1] - m;
            int L = 0, R = n-1;

            while(L < n && abs(a[L] - midL) <= m){
                L++;
            } 
            while(R >= 0 && abs(a[R] - midR) <= m){
                R--; 
            }
            
            bool flag = true;
            if (L <= R && R < n){
                flag &= (a[R] - a[L] <= 2 * m);
            }

            if (flag){
                r = m;
            }
            else {
                l = m+1;
            }
        }
        cout << l << endl;
    }
    return 0;
}

  	    				 	   		    			 					