#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        // ios_base::sync_with_stdio(false);
        // cin.tie(nullptr);
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;

        for (char c : s)
        {
            mp[c]++;
        }

        int x = 0;

        for (auto i : mp)
        {
            if (i.second % 2 != 0)
            {
                x++;
            }
        }

        if (x > k + 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
