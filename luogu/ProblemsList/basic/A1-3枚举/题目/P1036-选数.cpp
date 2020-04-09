#include<bits/stdc++.h>
using namespace std;
int num[21];
long long ans;
int n=0,k=0;

bool isPrime(int n)
{
	if(n<=1)return false;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i == 0)return false;
	}
	return true;
}

void dfs(int m,int sum,int start)
{
	if(m==k)
	{
		if(isPrime(sum))
		{
			ans++;
		}
		return;
	}
	for(int i=start;i<n;i++)
	{
		dfs(m+1,sum+num[i],i+1);
	}
	return;
}
int main()
{
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	dfs(0,0,0);
	printf("%d",ans);
	return 0;	
} 
