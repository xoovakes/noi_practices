#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int tot=0;
	for(int i=2;i<=1000009;i++)
	{
		int flag=1;
		for(int j=2;j<=sqrt(i);j++)
		{
			if(i%j==0&&i!=j)
			{
				flag=0;
				break;
			}
		}
			if(flag==1)
			{
				tot++;
			}
			if(tot==n)
			{
				cout<<i;
				break;
			}
		else continue;
	}
	return 0;
}
