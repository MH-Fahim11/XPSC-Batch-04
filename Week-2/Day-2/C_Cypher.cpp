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
        int n ;
        cin >> n;
        int a[n];
        int pass[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }


        for (int i = 0; i < n; i++)
        {
            int move;
            string cypher;
            cin>> move>> cypher;

            int x=a[i];
            for (int j = 0; j < move; j++)
            {
                if(cypher[j]=='U'){
                    if(x==0){
                        x=9;
                    }else{
                       x--; 
                    }
                    
                }else{
                    if(x==9){
                        x=0;
                    }else{
                       x++; 
                    }
                }
            }
            pass[i]=x;
        }

        for (int i = 0; i < n; i++)
        {   
            // if(pass[i]>9){
            //     cout<< pass[i]%10 << " ";
            // }else if(pass[i]<0){
            //     cout<< pass[i]%(-10) << " ";
            // }
            // else{
            //     cout<< pass[i] << " ";
            // }
            cout<< pass[i] << " ";
        }
        
        cout<<endl;
        
    }
    
    return 0;
}