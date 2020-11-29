#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int x,n;
	cin>>x>>n;
	double a=x;
	for(int i=0;i<n;i++){
		a=a*(1+0.1*0.01);
	}
	printf("%.4lf",a);
	return 0;
 } 
