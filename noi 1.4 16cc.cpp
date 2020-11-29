#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int t=0;
	t+=(a<b+c)&&(b<a+c)&&(c<a+b);
	if(t) cout<<"yes";
	else cout<<"no";
	return 0;
}
