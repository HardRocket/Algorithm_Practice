#include<bits/stdc++.h>
using namespace std;

int judge(int i,int j,int n)
{
	int tmp;
	//上下对称
	if(i>n*2+3)
	{
		i = n*4+6-i;	
	}
	//左右对称
	if(j>n*2+3)
	{
		j = n*4+6-j;	
	}
	if(i<=j)
	{
		tmp = i;
		i = j;
		j = tmp;
	}
	//前两行显示为"." 
	if(i<=2 && j<=2)return 0;
	//每一个奇数行，有连续三个"$" 
	if(i%2==1 && j>=i-2)return 1;
	//每一个奇数列，有一个"." 
	if(j%2==1 && j!=i-1)return 1;
	return 0;
	 
}
int main()
{
	int n=0;
	scanf("%d",&n);
	for(int i=1;i<=4*n+5;i++)
	{
		for(int j=1;j<=4*n+5;j++)
		{
			if(judge(i,j,n))
			{
				printf("$");
			}
			else
			{
				printf(".");
			}
		}
		printf("\n");
	}
	return 0;	
} 
