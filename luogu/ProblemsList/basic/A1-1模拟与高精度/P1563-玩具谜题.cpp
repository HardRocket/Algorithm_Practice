#include<bits/stdc++.h>
using namespace std;
int n,m=0;

int main()
{
	cin>>n>>m;
	int a[n];
	string b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		if(a[i]==0)
		{
			a[i]=1;	
		}
		else if(a[i]==1)
		{
			a[i]=-1;	
		}	
	}
	int flag=0; //¥Ê¥¢Œª÷√
	for(int j=0;j<m;j++)
	{
		int x,y=0;
		cin>>x>>y;
		if(x==0)
		{
			x=-1;	
		}
		flag += y*a[flag]*x;
		flag += n;
		flag %= n;	
	}
	cout<<b[flag];
	return 0;	
}
