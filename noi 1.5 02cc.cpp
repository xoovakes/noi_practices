#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double sum=0.0,m;
	for(int i=1;i<=12;i++){
		scanf("%lf",&m);
		sum+=m;
	}
	double ave;
	ave=sum/12.0;
	printf("$%.2lf",ave);
	return 0;
 } 
