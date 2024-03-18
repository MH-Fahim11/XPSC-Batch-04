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
        int a;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            mp[a]++;
        }

        int result = -1;
        for (auto it = mp.begin(); it != mp.end();it++) {
            if (it->second >= 3) {
                result = it->first;
                break;
            }
        }


        cout << result << endl;
        


    }
    
    return 0;
}