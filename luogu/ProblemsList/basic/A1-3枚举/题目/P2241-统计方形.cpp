#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n=0;
	int m=0;
	long long square=0;
	long long rectangle=0;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			//正方形 
			if(i==j)
			{
				square += (n-i)*(m-j);	
			}
			//长方形
			else
			{
				rectangle += (n-i)*(m-j);
			} 
		}
	}
	printf("%lld %lld",square,rectangle);
	return 0;	
} 
