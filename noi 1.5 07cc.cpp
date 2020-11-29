#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a,b,c;
	int sum,sa,sb,sc;
	sum=sa=sb=sc=0;
	for(int i=1;i<=n;i++){
		cin>>a>>b>>c;
		sa+=a;sb+=b;sc+=c;
	}
	sum=sa+sb+sc;
	printf("%d %d %d %d",sa,sb,sc,sum);
	return 0;
 } 
