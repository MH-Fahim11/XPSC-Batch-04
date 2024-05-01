#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--){
        ll n,k;
        cin >> n >> k;
        vector<int> v(k);
        for (int i = 0; i < k; i++){
            cin >> v[i];
        }
        
        sort(v.rbegin(), v.rend());

        ll i = 0, ans = n - v[0];

        while (i < v.size() && ans < n){
            ans = ans + n - v[++i];
        }
        cout << i << endl;
    }
    return 0;
}

    		   	 	 		 						 		 			