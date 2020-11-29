#include<cstdio>
#include<iostream>
const double PI=3.14;
using namespace std;
int main()
{
	double r,v;
	cin>>r;
	v=1.0*4/3*(PI*r*r*r);
	printf("%.2lf",v);
}
