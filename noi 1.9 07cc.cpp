#include<iostream>
#include<cstdio>
#define M 100
using namespace std;
int main()
{
	int n=0,a[M]={0};
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	int max=a[0],tot=0;
	for(int i=0;i<n;++i){
		if(max<a[i]) max=a[i];
	}
	for(int i=0;i<n;++i){
		if(a[i]!=max) tot+=a[i];
	}
	cout<<tot;
	return 0;
}
