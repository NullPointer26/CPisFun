/*====================================
Auther:    Shyam Makwana
Problem:   TheMarried-UnmarriedRiddle.cpp
====================================*/

#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
	int n,m,test;
	cin>>test;	
	while(test--)
	{
		string s;
		cin>>s;
		n=s.length();
		bool married=false;
		bool isAns=false;

		for(int i=0;i<n;i++)
		{
			if(s[i]=='M')
				married=true;
			else if(s[i]=='U' && married==true)
			{
				isAns=true;
				break;
			}
		}
		if(isAns)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}