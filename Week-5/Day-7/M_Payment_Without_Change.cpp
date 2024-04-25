#include <bits/stdc++.h>
using namespace std;
int main()
{   ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, a, b, f;
        cin >> n >> a >> b >> f;
        if (f % b <= a && n * b + a >= f)
        {
            cout << "YES" << endl;
        }
        else
        {
 
            cout << "NO" << endl;
        }
    }
 
    return 0;
}