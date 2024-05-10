#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int minCost=-1;

        for(char c='a';c<='z';c++)
        {
            int l=0,r=n-1,cost=0;
            bool can=true;
            while(l<r)
            {
                if(s[l]==s[r]){
                    l++;
                    r--;
                }
                else if(s[l]==c){
                    cost++;
                    l++;
                }
                else if(s[r]==c){
                    cost++;
                    r--;
                }
                else
                {
                    can=false;
                    break;
                }
            }
            if(can&&(cost<minCost||minCost==-1)){
                minCost=cost;
            }
        }
        cout<<minCost<<'\n';
    }

    return 0;
}
