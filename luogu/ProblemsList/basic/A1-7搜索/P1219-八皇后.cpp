#include<bits/stdc++.h>
using namespace std;

int ans=0;
int n=0;
int col[20]={0}; //列
int l_dig[30]={0}; //左上到右下 
int r_dig[30]={0}; //右上到左下
int res[20]={0};

void print()
{
	if(ans<=3)
	{
		for(int i=1;i<=n;i++)
		{
			printf("%d ",res[i]);	
		}
		printf("\n");
	}	
}
 
void dfs(int x)
{
	if(x>n)
	{
		ans++;
		print();
		return ;
	}
	for(int i=1;i<=n;i++)
	{
		if( !col[i] && !l_dig[x-i+n] && !r_dig[x+i] )
		{
			col[i] = 1;
			l_dig[x-i+n] = 1;
			r_dig[x+i] = 1;
			res[x] = i;
			dfs(x+1);
			col[i] = 0;
			l_dig[x-i+n] = 0;
			r_dig[x+i] = 0;	
		}
	}
	
}
int main()
{
	scanf("%d",&n);
	dfs(1);
	printf("%d",ans);
	return 0;	
} 
