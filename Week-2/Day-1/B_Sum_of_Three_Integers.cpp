#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k,s;
    cin >> k >> s;
    int ans=0;

    for(int i = 0; i <= k; i++){
        for (int j = 0; j <= k; j++)
        {
            int l = s-i-j;
            if(l>=0 && l<=k) {
                ans++;
            }
        }
        
    }
    
    cout << ans << endl;
    return 0;
}
