#include<bits/stdc++.h>
using namespace std;
int num[10001];

int main()
{
	int N=0;
	int M=0;
	scanf("%d",&N);
	scanf("%d",&M);
	for(int i=0;i<N;i++)
	{
		scanf("%d",&num[i]);	
	}
	while(M--)
	{
		next_permutation(num,num+N);
	} 
	for(int i=0;i<N;i++)
	{
		if(i==N-1)
		{
			printf("%d",num[i]);
		}
		else
		{
			printf("%d ",num[i]);	
		}	
	}	
	return 0;	
} 
