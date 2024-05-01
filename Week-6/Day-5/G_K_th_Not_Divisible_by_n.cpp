#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    int t; 
    cin>>t; 

    while(t--){
        ll n, k; 
        cin>>n>>k;

        ll left = 0, right = 2 * 1e9, ans = -1; 

        while(left <= right){
            ll mid = left + ( right - left) / 2; 
            ll div = mid / n; 
            ll sub = mid - div;

            if(sub == k){
                if(mid % n == 0){
                    ans = mid - 1;
                }
                else{
                    ans = mid; 
                }
            }

            if(k > sub){
                left = mid + 1;
            }
            else{
                right = mid - 1; 
            }

        }

        cout<<ans<<endl; 
    }
    return 0; 
}