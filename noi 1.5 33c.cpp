#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;cin>>n;
	double flag=1.0,sum=0.0,item;
	for(int i=1;i<=n;i++){
		item=flag/i;
		sum+=item;
		flag*=-1;
	}
	printf("%.4lf",sum);
	return 0;
}
