#include<bits/stdc++.h>
using namespace std;
int num[10] = {1,2,3,4,5,6,7,8,9};

int nsum(int left,int right)
{
	int sum=0;
	for(int i=left;i<=right;i++)
	{
		sum = sum*10+num[i];
	}
	return sum;
}
int main()
{
	int a=0,b=0,c=0;
	int flag=0;
	scanf("%d %d %d",&a,&b,&c);
	int sum = a*b*c;
	int A = sum/a;
	int B = sum/b;
	int C = sum/c;
	do
	{
		int num1 = nsum(0,2);
		int num2 = nsum(3,5);
		int num3 = nsum(6,8);
		if( (num1 * A == num2 * B) && (num1 * A == num3 * C))
		{
			printf("%d %d %d\n",num1,num2,num3);
			flag = 1;
		}
	}while(next_permutation(num,num+9));
	if(flag == 0)
	{
		printf("No!!!");
	}
	return 0;	
} 
