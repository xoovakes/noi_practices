#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int total=0,a;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a==m) total++;
	}
	cout<<total;
	return 0;
 } 
