#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 0;
	int f1 = 1;
	int f2 = 1;
	int f3 = 0;
	scanf("%d",&n);
	if(n==1 || n==2)
	{
		printf("1");
	}
	else if(n >= 3)
	{
		for(int i=3;i<=n;i++)
		{
			f3 = (f1+f2)%10007;
			f1 = f2;
			f2 = f3;
		}
		printf("%d",f3);
	}
	return 0;
} 
