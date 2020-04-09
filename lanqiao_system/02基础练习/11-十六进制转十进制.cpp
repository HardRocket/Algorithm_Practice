#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int len = str.length();
	long long sum=0;
	for(int i=0;i<len;i++)
	{
		if(str[i]>='A' && str[i]<='F')
		{
			sum += (str[i]-'A'+10) * pow(16,(len-i-1));
		}
		else
		{
			sum += (str[i]-'0') * pow(16,(len-i-1));
		}
	}
	printf("%lld",sum);
	return 0;
} 
