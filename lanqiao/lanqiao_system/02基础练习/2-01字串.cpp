#include<bits/stdc++.h>
using namespace std;

//int main()
//{
//	for(int i=0;i<2;i++)
//	{
//		for(int j=0;j<2;j++)
//		{
//			for(int k=0;k<2;k++)
//			{
//				for(int m=0;m<2;m++)
//				{
//					for(int n=0;n<2;n++)
//					{
//						printf("%d%d%d%d%d\n",i,j,k,m,n);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//} 

int main()
{
	for(int i=0;i<32;i++)
	{
		int a[5] = {0};
		int j=0;
		int num=i;
		while(num)
		{
			a[j]=num%2;
			num /= 2;
			j++;
		}
		for(int k=4;k>=0;k--)
		{
			printf("%d",a[k]);
		}
		printf("\n");
	}
	return 0;
}
