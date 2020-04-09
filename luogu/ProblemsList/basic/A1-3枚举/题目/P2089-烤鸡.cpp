#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n=0;
	int ans=0;
	scanf("%d",&n);
	for(int a=1;a<=3;a++)
	{
		for(int s=1;s<=3;s++)
		{
			for(int d=1;d<=3;d++)
			{
				for(int f=1;f<=3;f++)
				{
					for(int g=1;g<=3;g++)
					{
						for(int h=1;h<=3;h++)
						{
							for(int j=1;j<=3;j++)
							{
								for(int k=1;k<=3;k++)
								{
									for(int l=1;l<=3;l++)
									{
										for(int z=1;z<=3;z++)
										{
											if(a+s+d+f+g+h+j+k+l+z == n)
											{
												ans++;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	printf("%d\n",ans);
	for(int a=1;a<=3;a++)
	{
		for(int s=1;s<=3;s++)
		{
			for(int d=1;d<=3;d++)
			{
				for(int f=1;f<=3;f++)
				{
					for(int g=1;g<=3;g++)
					{
						for(int h=1;h<=3;h++)
						{
							for(int j=1;j<=3;j++)
							{
								for(int k=1;k<=3;k++)
								{
									for(int l=1;l<=3;l++)
									{
										for(int z=1;z<=3;z++)
										{
											if(a+s+d+f+g+h+j+k+l+z == n)
											{
												printf("%d %d %d %d %d %d %d %d %d %d\n",
												       a,s,d,f,g,h,j,k,l,z);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}	
	return 0;	
} 
