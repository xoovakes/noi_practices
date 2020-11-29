#include<iostream>
#include<cstdio>
#define M 10000
using namespace std;
int main()
{
	int m=0;
	cin>>m;
	int a[M];
	for(int i=0;i<m;++i){
		cin>>a[i];
	}
	int max,min;
	max=min=a[0];
	for(int i=0;i<m;++i){
		if(max<a[i]) max=a[i];
		if(min>a[i]) min=a[i];
	}
	cout<<max-min;
	return 0;
}
