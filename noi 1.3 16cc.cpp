#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double xa,xb,ya,yb,l;
	cin>>xa>>ya>>xb>>yb;
	l=sqrt(pow(xa-xb,2)+pow(ya-yb,2));
	printf("%.3lf",l);
}
