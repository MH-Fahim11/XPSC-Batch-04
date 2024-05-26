#include<bits/stdc++.h>
#define int long long
using namespace std;

const int maxn=200010;

signed main()
{
	ios::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string x;
	    cin>>x;
	    int a=0,b=0,c=0,d=0,v=0,vi=0;

	    for(int i=0;i<n;i++)
	    {
	    	if(x[i]=='N'){
				if(a%2){
                    x[i]='R';
                }
				else {
                    x[i]='H';
                }
				a++;
			}

	    	else if(x[i]=='S'){
				if(b%2){
                    x[i]='R';
                }
				else{ 
                    x[i]='H';
                }
				b++;
			}
	    	else if(x[i]=='W'){
				if(c%2){
                    x[i]='H';
                }
				else {
                    x[i]='R';
                }
				c++;
			}
	    	else if(x[i]=='E'){
				if(d%2){
                    x[i]='H';
                }
				else {
                    x[i]='R';
                }
				d++;
			}
			if(x[i]=='R'){
                v=1;
            }
			else {
                vi=1;
            }
		}
		if(vi&&v&&(a%2==b%2)&&(c%2==d%2)){
            cout<<x<<endl;
        }
		else {
            cout<<"NO"<<endl;
        }
	}
	return 0;
}
