#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve(vector<ll>& arr, ll X, ll N)
{
 
    vector<vector<ll> > vec(N, vector<ll>(2));
    for (int i = 0; i < N; i++) {
        vec[i][0] = arr[i];
        vec[i][1] = i + 1;
    }

   
    sort(vec.begin(), vec.end());

 
    for (ll ptr1 = 0; ptr1 < N - 2; ptr1++) {
    
        ll ptr2 = ptr1 + 1;
        ll ptr3 = N - 1;

        while (ptr2 < ptr3) {
            ll currentSum = vec[ptr1][0] + vec[ptr2][0]
                            + vec[ptr3][0];
            if (currentSum == X) {
                cout << vec[ptr1][1] << " " << vec[ptr2][1]
                     << " " << vec[ptr3][1] << "\n";
                return;
            }
            // Decrease the currentSum by moving ptr3 to
            // ptr3 - 1
            else if (currentSum > X) {
                ptr3--;
            }
            // Increase the currentSum by moving ptr2 to
            // ptr2 + 1
            else if (currentSum < X) {
                ptr2++;
            }
        }
    }
    cout << "IMPOSSIBLE";
}

int main()
{
    ll N, X ;
    cin>>N>>X;
    vector<ll> arr;
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    
    solve(arr, X, N);
    return 0;
}
