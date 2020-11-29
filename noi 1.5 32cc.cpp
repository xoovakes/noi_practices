#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;cin>>n;
	int q=2,p=1,t;
	double sum=0;
	while(n){
		sum+=1.0*q/p;
		t=q+p;
		p=q;
		q=t;
		n--;
	}
	printf("%.4lf",sum);
	return 0;
}
