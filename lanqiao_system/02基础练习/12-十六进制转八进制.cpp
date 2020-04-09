#include<bits/stdc++.h>
using namespace std;

string str[16] = {"0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010",
                  "1011","1100","1101","1110","1111"};

int main()
{
	map<string, string> t;
	t["000"] = "0"; t["001"] = "1"; t["010"] = "2"; t["011"] = "3"; t["100"] = "4"; t["101"] = "5";
	t["110"] = "6"; t["111"] = "7";
	int n=0;
	string s="";
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		cin>>s;
		string s1="";
		for(int j=0;j<s.length();j++)
		{
			if(s[j]>='A' && s[j]<='F')
			{
				s1 += str[s[j]-'A'+10];
			}
			else
			{
				s1 += str[s[j]-'0'];
			}
		}
		
		if(s1.length() % 3 == 2)
		{
			s1 = "0" + s1;
		}
		else if(s1.length() % 3 == 1)
		{
			s1 = "00" + s1;
		}
		
		int flag=0;
		for(int j=0;j<=s1.length()-3;j+=3)
		{
			string s2 = s1.substr(j,3);
			string s3 = t[s2];
			if(s3 != "0")
			{
				flag=1;
			}
			if(flag)
			{
				cout<<s3;
			}
		}
		cout<<endl;
	}
} 
