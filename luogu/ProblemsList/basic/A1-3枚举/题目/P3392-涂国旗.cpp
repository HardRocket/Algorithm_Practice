#include<bits/stdc++.h>
using namespace std;
int N,M=0;
int ans=0x7fffffff; //int×î´óÖµ 
int w[51]={0};
int b[51]={0};
int r[51]={0};
string str;

int check(char c)
{
	int sum = 0;
	for(int i=0;i<M;i++)
	{
		if(str[i]!=c)sum++;
	}
	return sum;
}

int main()
{
	scanf("%d %d",&N,&M);
	for(int i=1;i<=N;i++)
	{
		cin>>str;
		w[i] = w[i-1] + check('W');
		b[i] = b[i-1] + check('B');
		r[i] = r[i-1] + check('R');
	}
	
	for(int i=1;i<N-1;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			ans = min(ans,w[i]+b[j]-b[i]+r[N]-r[j]);
		}
	}
	printf("%d",ans);
	return 0;	
} 
