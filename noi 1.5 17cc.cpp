#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long a,b,c;
	int k;
	cin>>k;
	a=1;b=c=0;
	for(int i=1;i<=k;i++){
		c=a+b;
		a=b;b=c;
	}
	cout<<c;
	return 0;
} 
