#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(ll N, ll* songs)
{
    ll start = 0, ans = 0;
    map<ll, ll> mp;
    
    for (ll end = 0; end < N; end++) {
        
        if (mp.find(songs[end]) == mp.end())
            mp.insert({ songs[end], end });
        else {
            if (mp[songs[end]] >= start)
                start = mp[songs[end]] + 1;
            mp[songs[end]] = end;
        }
        ans = max(ans, end - start + 1);
    }
    return ans;
}

int main()
{
    ll N;
    cin >> N;
    ll songs[N];
    for (int i = 0; i < N; i++)
    {
        cin>>songs[i];
    }
    

    cout << solve(N, songs) << "\n";
}