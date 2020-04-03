#include<bits/stdc++.h>
using namespace std;
int num[10001];

int main()
{
	int n=0;
	int sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		sum += num[i]; 	
	}
	sort(num,num+n); //ÅÅÐò£¬Ä¬ÈÏµÝÔö 
	printf("%d\n",num[n-1]);
	printf("%d\n",num[0]);
	printf("%d\n",sum);
	return 0;
} 
