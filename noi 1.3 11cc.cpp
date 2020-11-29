#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double a,b,yushu;int shang;
	cin>>a>>b;
	shang=floor(a/b);
	yushu=a-shang*b;
	printf("%g",yushu);
}
