#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,x;
    cin>>n>>x;
    vector<long long> arr;
    for (size_t i = 0; i < n; i++)
    {
        int y;
        cin>>y;
        arr.push_back(y);
    }
    long long start = 0, end = -1, sum = 0, cnt = 0;

    while (end < n) {
    
        while (end < n && sum < x) {
            end += 1;
            sum += arr[end];
        }

        while (start <= end && sum > x) {
            sum -= arr[start];
            start += 1;
        }

        if (sum == x) {
            cnt += 1;
            sum -= arr[start];
            start += 1;
        }
    }
    cout<< cnt;


    return 0;
}