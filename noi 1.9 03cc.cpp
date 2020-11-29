#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b,c[7]={0};
	for(int i=0;i<7;i++){
		cin>>a>>b;
		if(a+b>8) ++c[i];
	}
	for(int i=0;i<7;i++){
		if(c[i]==1){
			cout<<i+1;
			break;
		}
	}
	return 0;
}
