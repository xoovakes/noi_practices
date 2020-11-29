#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	double x,y,r,p,s,i,t=0;
	cin>>r;
	for(i=1;i<=r;++i){
		cin>>x>>y>>p;
		s=sqrt((x*x)+(y*y));
		t=t+2*s/50+p*1.5;
	}
	cout<<ceil(t)<<endl;
	return 0;
}
