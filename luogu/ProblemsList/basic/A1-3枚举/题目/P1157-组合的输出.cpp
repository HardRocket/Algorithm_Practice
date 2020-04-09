#include<bits/stdc++.h>
using namespace std;
int n=0,r=0;
int num[21];

void print()
{
	for(int i=1;i<=r;i++)
	{
		printf("%3d",num[i]);
	}
	printf("\n");
	return;
}

void dfs(int m)
{
	if(m>r)
	{
		print();
		return;
	}
	for(int i=num[m-1]+1;i<=n;i++)
	{
		num[m] = i;
		dfs(m+1);
	}
	return;
}

int main()
{
	scanf("%d %d",&n,&r);
	dfs(1);
	return 0;	
} 
