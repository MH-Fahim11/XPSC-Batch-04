#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int sum=1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
            
        sort(arr,arr+n);
        arr[0]++;
        for(int i=0;i<n;i++){
            sum*=arr[i];
        }
       
        cout<<sum<<endl;

    }
    return 0;
}