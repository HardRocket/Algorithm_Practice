#include<bits/stdc++.h>
using namespace std;
char area[101][101];
int n,m=0;
int dx[]={0,1,-1};
int dy[]={0,1,-1};

int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>area[i][j];	
		}	
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(area[i][j] == '?')
			{
				int ans=0;
				for(int a=0;a<3;a++)
				{
					for(int b=0;b<3;b++)
					{
						if((i+dx[a]<=n && i+dx[a]>=0) && (j+dy[b]<=m && j+dy[b]>=0))
						{
							if(area[i+dx[a]][j+dy[b]] == '*')
							{
								ans++;
							}	
						}	
					}	
				}
				area[i][j]=ans+'0';	
			}	
		}	
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<area[i][j];
		}
		cout<<endl;	
	}
	return 0;		
} 
