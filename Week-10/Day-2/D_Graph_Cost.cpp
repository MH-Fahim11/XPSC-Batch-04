#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long int > a(n);
        
        vector<vector<long long>> dis(2, vector<long long int>(n));

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }    

        for (int i = 0; i < 2; i++) 
        {
            int x = 0;
            for (int j = 0; j < n; j++) 
            {
                dis[i][j] = dis[i][x] + max(a[j], a[x]) * (j - x);
                if (a[j] <= a[x])
                    x = j;
            }
            reverse(a.begin(), a.end());
        }

        
        long long int ans = LLONG_MAX;

        for (int i = 0; i < n; i++)
        {
            ans = min(ans, dis[0][i] + dis[1][n - 1 - i]);
        }

        cout << ans << endl;
    }
    
    return 0;
}