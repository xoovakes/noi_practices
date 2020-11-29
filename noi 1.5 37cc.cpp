#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int m,n,x;
	cin>>m>>n>>x;
	while(x>0)
	{
		if(x<ceil(m*1.0/n)) break;
		x-=ceil(m*1.0/n);
		n+=m/n;
	}
	cout<<n;
	return 0;
}
