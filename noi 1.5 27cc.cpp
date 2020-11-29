#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int k;cin>>k;
	int n=1;
	double item,sn=0;
	while(sn<=k){
		item=1.0/n;
		sn+=item;
		n++;
	}
	n--;
	cout<<n;
	return 0;
}
