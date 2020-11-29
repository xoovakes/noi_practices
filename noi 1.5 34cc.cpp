#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;cin>>n;
	int sum=0,item=1;
	for(int i=1;i<=n;i++){
		item*=i;
		sum+=item;
	}
	cout<<sum;
	return 0;
}
