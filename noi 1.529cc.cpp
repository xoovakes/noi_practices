#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long a,b,sum=0;
	cin>>a;
	while(a){
		b=a%10;
		sum=sum*10+b;
		a/=10;
	}
	cout<<sum;
	return 0;
}
