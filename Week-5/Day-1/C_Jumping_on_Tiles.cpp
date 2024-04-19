#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int tst;
    cin >> tst;
    while (tst--)
    {
        string s;
        cin >> s;
        int n = s.length();
        char first = s[0];
        char last = s[n - 1];
        char mn = min(first, last);
        char mx = max(first, last);
        multiset<pair<char, int>> st;
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= mn && s[i] <= mx)
                st.insert({s[i], i + 1});
        }
        vector<char> v1;
        vector<int> v2;
        for (auto [a, b] : st)
        {
            v1.push_back(a);
            if (b != 1 && b != n)
                v2.push_back(b);
        }
        long long cost = 0;
        for (int i = 1; i < v1.size(); i++)
            cost += abs(v1[i] - v1[i - 1]);
        if (first <= last)
        {
            cout << cost << " " << v1.size() << '\n';
            cout << 1 << " ";
            for (auto val : v2)
                cout << val << " ";
            cout << n << '\n';
        }
        else
        {
            cout << cost << " " << v1.size() << '\n';
            cout << 1 << " ";
            for (int i = v2.size() - 1; i >= 0; i--)
                cout << v2[i] << " ";
            cout << n << '\n';
        }
    }
    return 0;
}