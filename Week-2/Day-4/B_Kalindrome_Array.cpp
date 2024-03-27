#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x, int n,  vector<int> a){
    bool flag=true;
    int i=0, j=n-1;
    while(i<j){
        if(a[i]==x){
            i++;
            continue;
        }
        if(a[j]==x){
            j--;
            continue;
        }
        if(a[i]!=a[j]){
            flag=false;
            break;
        }
        i++;
        j--;
    }
    return flag;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        int i=0,j=n-1, x=-1,y=-1;
        while (i<j)
        {
            if(a[i]!=a[j]){
                x=a[i];
                y=a[j];
                break;
            }
        }
        
        if(isPalindrome(y,n,a)||isPalindrome(x,n,a)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}