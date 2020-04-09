#include<bits/stdc++.h>
using namespace std;
int N,M,T=0;
int SX,SY=0;
int FX,FY=0;
int ans=0;
bool flag[6][6]={0};
bool vis[6][6]={0};
int xx[] = {0,1,-1,0};
int yy[] = {1,0,0,-1};

void dfs(int x,int y)
{
	if(x==FX && y==FY)
	{
		ans++;
		return;
	}
	for(int i=0;i<4;i++)
	{
		int dx = x+xx[i];
		int dy = y+yy[i];
		if( (dx>=1 && dx<=N) && (dy>=1 && dy<=N) && !vis[dx][dy] && !flag[dx][dy])
		{
			vis[dx][dy]=1;
			dfs(dx,dy);
			vis[dx][dy]=0;
		}	
	}
}

int main()
{
	scanf("%d %d %d",&N,&M,&T);
	scanf("%d %d %d %d",&SX,&SY,&FX,&FY);
	int a,b=0;
	for(int i=0;i<T;i++)
	{
		scanf("%d %d",&a,&b);
		flag[a][b]=1;		  
	}
	vis[SX][SY]=1;
	dfs(SX,SY);
	printf("%d",ans);
	return 0;	
} 
