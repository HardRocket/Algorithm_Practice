#include<bits/stdc++.h>
using namespace std;
char sco,score[62510];
int m=0;
int w,l=0;
int main()
{
	while(cin>>sco)
	{
		if(sco == 'E')break;
		else
		{
			score[m++]=sco;
		}
	}
	for(int i=0;i<=m;i++)
	{
		if(score[i]=='W')w++;
		else if(score[i]=='L')l++;
		
		if((w>=11 || l>=11 ) && abs(w-l)>=2)
		{
			printf("%d:%d\n",w,l);
			w=0;
			l=0;
		}
		
	}
	printf("%d:%d\n",w,l);
	printf("\n");
	w=0;
	l=0;
	for(int i=0;i<=m;i++)
	{
		if(score[i]=='W')w++;
		else if(score[i]=='L')l++;
		
		if((w>=21 || l>=21 ) && abs(w-l)>=2)
		{
			printf("%d:%d\n",w,l);
			w=0;
			l=0;
		}
		
	}
	printf("%d:%d\n",w,l);
	return 0;
}
