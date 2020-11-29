#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	int a,count=0;
	for(int i=m;i<=n;i++){
		a=i;
		while(a){
			if(a%10==2) count++;
			a/=10;
		}
	}
	cout<<count;
	return 0;
}
