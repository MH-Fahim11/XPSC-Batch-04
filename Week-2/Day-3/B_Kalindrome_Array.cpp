#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>> t;

    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n;i++){
            cin>>arr[i];
        }
        int j=n-2 , i=0;
        bool flag = true;
        while(i<j)
        {
            if(arr[i]!=arr[j]){
                flag = false;
                break;
            }
            i++;
            j--;
        }
        if(flag){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
    

    return 0;
}