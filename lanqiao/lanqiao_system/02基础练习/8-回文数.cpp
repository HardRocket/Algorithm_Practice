#include<bits/stdc++.h>
using namespace std;

int main()
{
	for(int i=1;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			printf("%d\n",i*1000+j*100+j*10+i);	
		}	
	}
	return 0;	
} 

//int main()
//{
//	for(int i=1001;i<=9999;i++)
//	{
//		string str = to_string(i);
//		string str1 = str;
//		reverse(str.begin(),str.end());
//		if(str == str1)
//		{
//			cout<<str<<endl;
//		}
//	}
//	return 0;
//}
