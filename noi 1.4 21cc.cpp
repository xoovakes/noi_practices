#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int n,x,y;
	cin>>n>>x>>y;
	int sheng;
	sheng = n-ceil(y*1.0/x);
	if(sheng<0) cout<<"0";
	else cout<<sheng;
	return 0;
 } 
