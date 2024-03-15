#include <bits/stdc++.h>
using namespace std;


int main()
{
    string n;
    cin>>n;

    while (n.length()<4)
    {
        n.insert(0, "0");
    }
    
    cout<< n;

    return 0;
}