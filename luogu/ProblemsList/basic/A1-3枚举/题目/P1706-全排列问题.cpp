#include<bits/stdc++.h>
using namespace std;
int num[10];

int main()
{
	int n=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		num[i] = i+1;		
	}
	do
	{
		for(int i=0;i<n;i++)
		{
			printf("%5d",num[i]);
		}
		printf("\n");
	}while(next_permutation(num,num+n));
	return 0;	
} 
