#include <bits/stdc++.h>
using namespace std;

bool isPrime(long n){
    for(int i{2}; i*i<=n; ++i){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long n; 
    cin>>n;
    
    if(isPrime(n)){
        cout<<1<<endl;
    }
    else if(n%2==0 || isPrime(n-2)){
        cout<<2<<endl;
    }
    else{
        cout<<3<<endl;
    }

    return 0;
}