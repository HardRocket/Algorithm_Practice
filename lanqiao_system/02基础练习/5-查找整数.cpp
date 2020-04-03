#include<bits/stdc++.h>
using namespace std;
int num[1001] = {0};
int main()
{
	int n=0;
	int flag=0;
	int flag1=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&num[i]);
	}
	scanf("%d",&flag);
	for(int i=1;i<=n;i++)
	{
		if(flag == num[i])
		{
			flag = i;
			flag1 = 1;
			break;
			
		}
	}
	if(flag1)
	{
		printf("%d",flag);
	}
	else
	{
		printf("-1");
	}
	return 0;
} 
