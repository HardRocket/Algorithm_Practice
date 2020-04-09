#include<bits/stdc++.h>
using namespace std;
int num[9] = {1,2,3,4,5,6,7,8,9};

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
	int N=0;
	int ans=0;
	scanf("%d",&N);
	do
	{
		for(int i=0;i<7;i++)
		{
			for(int j=i+1;j<8;j++)
			{
				int a = nsum(0,i);
				int b = nsum(i+1,j);
				int c = nsum(j+1,8);
				if(b%c!=0 || a+b/c!=N)
				{
					continue;
				}
				ans++;
			}
		}
	}while(next_permutation(num,num+9));
	printf("%d",ans);
	return 0;	
} 
