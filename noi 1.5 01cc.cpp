#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double age,sum=0,ave;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%lf",&age);
		sum+=age;
	}
	ave=sum/n;
	printf("%.2lf",ave);
	return 0;
 } 
