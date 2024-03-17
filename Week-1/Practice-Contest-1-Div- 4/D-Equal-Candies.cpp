#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int>& a, pair<string, int>& b) {
    return a.second < b.second;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];  
        }

        sort(a,a+n);

        int c=0;

        for (int i = 1; i < n; i++)
        {
            c+= a[i]-a[0];
        }
        cout<<c<<endl;

    }
    
    return 0;
}