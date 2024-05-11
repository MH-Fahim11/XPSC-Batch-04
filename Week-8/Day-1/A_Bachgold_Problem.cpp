#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int prime = n/2;
    cout<<prime<<endl;

    if(n%2 == 0){
        for(int i = 0; i < prime; i++){
            cout<<2<<" ";
        }
        cout<<endl;
    }else{
        for(int i = 0; i < prime - 1; i++){
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }

    

    return 0;
}