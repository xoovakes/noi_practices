#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
float cll(float ,float );
int main()
{
	float x1,x2,x3,y1,y2,y3;
	float a,b,c,s;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	a=cll(x1-x2,y1-y2);
	b=cll(x1-x3,y1-y3);
	c=cll(x2-x3,y2-y3);
	float p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.2f",s);
	return 0;
}
float cll(float x, float y)
{
	float l=0;
	l=sqrt(pow(x,2)+pow(y,2));
	return l;
}
