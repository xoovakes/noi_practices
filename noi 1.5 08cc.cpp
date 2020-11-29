#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a,sum=0;
	for(int i=0;i<n-1;i++){
		cin>>a;
		sum+=a;
	}
	int sa=(n-2)*180;
	a=sa-sum;
	cout<<a;
	return 0;
 } 
