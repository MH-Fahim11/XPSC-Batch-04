#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--)
	{
	    int n;
	    cin>>n;
	    int a[n];

	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    int minx=0;
	    for(int i=0;i<n;i++)
	    {
	       minx = minx^a[i];
	    }
	    
	    int mi,ans=minx;
	    for(int i=0;i<n;i++)
	    {
	        mi = minx^a[i];
	        ans = min(mi,ans);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}