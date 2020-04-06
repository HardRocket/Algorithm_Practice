#include<bits/stdc++.h>
using namespace std;
int num[35][35] = {0};
int main()
{
	int n=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j==1 || j==i)
			{
				num[i][j] = 1;
			}
			else
			{
				num[i][j] = num[i-1][j-1] + num[i-1][j];
			}
		}			
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d ",num[i][j]);	
		}
		printf("\n");	
	}
	return 0;		
} 
