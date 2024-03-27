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
       int n;
       cin>>n;
       string a,b;
       cin >> a >> b;

        if(a==b){
            cout << "Yes" << endl;
            break;
        }
        else{
            bool fl = true;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    swap(a[i], a[j]);
                    if(a==b){
                        cout << "Yes" << endl;
                        fl=false;
                        break;
                    }
                    swap(a[i], a[j]);
                }
                
            }
            if(fl){
                cout << "No" << endl; 
            }
           
        }

    }
    
    
}