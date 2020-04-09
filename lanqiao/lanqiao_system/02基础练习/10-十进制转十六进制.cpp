#include<bits/stdc++.h>
using namespace std;
char n[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
stack<char> st;
int main()
{
	long long a = 0;
	scanf("%lld",&a);
	if(a==0)
	{
		printf("0");
	}
	else
	{
		while(a)
		{
			st.push(n[a%16]);
			a /= 16;
		}
		while(st.empty() == false)
		{
			printf("%c",st.top());
			st.pop();
		}
	}
	return 0;
} 
