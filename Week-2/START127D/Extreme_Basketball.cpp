#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int a,b;
        cin >> a >> b;
        // bool flag = true;
        int shoot = 0;
        while(true){
            int def = a-b;
            if(def>=10){
                break;
            }
            a+=3;
            shoot++;
        }
        cout << shoot << endl;
    }
    
    
}