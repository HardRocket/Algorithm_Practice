#include<bits/stdc++.h>
using namespace std;
int R,C,K=0;
char area[101][101];
int dx[2] = {0,1};
int dy[2] = {1,0};
int ans=0;

void dfs(int x,int y,int a,int b)
{
	if(b>K)
	{
		ans++;
		return;
	}
	if(area[x][y]!='.' || x>=R || y>=C || x<0 || y<0)
	{
		return;
	}
	dfs(x+dx[a],y+dy[a],a,b+1);
	return;
}
int main()
{
	scanf("%d %d %d",&R,&C,&K);
	for(int i=0;i<R;i++)
	{
		cin>>area[i];	
	}
	
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			if(area[i][j]=='.')
			{
				for(int k=0;k<2;k++)
				{
					dfs(i,j,k,1);
				}
			}
		}
	}
	if(K==1)
	{
		ans /= 2;
	}
	printf("%d",ans);
	return 0;	
} 
