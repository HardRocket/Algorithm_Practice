#include<bits/stdc++.h>
using namespace std;

int judge(int i,int j,int n)
{
	int tmp;
	//���¶Գ�
	if(i>n*2+3)
	{
		i = n*4+6-i;	
	}
	//���ҶԳ�
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
	//ǰ������ʾΪ"." 
	if(i<=2 && j<=2)return 0;
	//ÿһ�������У�����������"$" 
	if(i%2==1 && j>=i-2)return 1;
	//ÿһ�������У���һ��"." 
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
