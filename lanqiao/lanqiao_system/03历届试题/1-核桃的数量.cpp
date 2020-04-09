#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a=0;
	int b=0;
	int c=0;
	scanf("%d %d %d",&a,&b,&c);
	for(int i=1;i<=a*b*c;i++)
	{
		if( i%a==0 && i%b==0 && i%c==0)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
