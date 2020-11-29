#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int count=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(i%j==0) count++;
		}
		if(count%2==1){
			if(i!=1) cout<<",";
			cout<<i;
		}
		count=0;
	}
	return 0;
}
