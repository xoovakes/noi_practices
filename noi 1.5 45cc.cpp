#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m=1,i=1,tot=0;
	for(;i<=n;i+=m){
			tot+=m*m;
			m++;
	}
	i-=m;
	tot+=m*(n-i);
	cout<<tot;
	return 0;
}
