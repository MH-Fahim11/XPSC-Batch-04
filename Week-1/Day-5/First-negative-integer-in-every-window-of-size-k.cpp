//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[], long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
    vector<long long> result;

    for (long long i = 0; i <= N - K; i++){
        int flag=-1;
        for(long long j=i; j<K+i;j++){
            if(A[j]<0){
                result.push_back(A[j]);
                flag=1;
                break;
            }
        }
        if(flag ==-1){
            result.push_back(0);
        }
    }
                                              
   return result;                                              
                                                 
 }