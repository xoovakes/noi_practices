#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a;
	cin>>a;
	if(a%400==0||a%100!=0&&a%4==0) cout<<"Y";
	else cout<<"N";
	return 0;
}
