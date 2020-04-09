#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n=0;
	scanf("%d",&n);
	
	for(int i=1;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			for(int k=0;k<10;k++)
			{
				if( (i*2+j*2+k) == n )
				{
					printf("%d%d%d%d%d\n",i,j,k,j,i);
				}
			}
		}
	}
	
	for(int i=1;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			for(int k=0;k<10;k++)
			{
				if( (i+j+k)*2 == n )
				{
					printf("%d%d%d%d%d%d\n",i,j,k,k,j,i);
				}
			}
		}
	}
	return 0;	
} 
