#include<iostream>
#include<cstdio>
using namespace std;
double fact(int );
int main()
{
	int n;
	cin>>n;
	double e=1.0,item;
	for(int i=1;i<=n;i++){
		item=1.0/fact(i);
		e+=item;
	}
	printf("%.10lf",e);
	return 0;
}
double fact(int n)
{
	double item=1;
	for(int i=1;i<=n;i++){
		item*=i;
	}
	return item;
}
