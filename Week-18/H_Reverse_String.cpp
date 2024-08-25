#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    string a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		bool flag = 0;
		for (int i=0;i<a.size();i++)
		{
			string s1=a.substr(0,i+1),s2=a.substr(0,i);
			reverse(s2.begin(),s2.end());
			s1+=s2;
			if(s1.find(b)!=-1)
			{
				flag=1;
				break;
			}
		}
		cout<<((flag==1) ? "YES\n" : "NO\n");
	}
	return 0;
}