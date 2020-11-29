#include<iostream>
#include<cstdio>
using namespace std;
int i=0;
int main()
{
	int m,peo,n,count=0;
	cin>>m>>peo;
	while(peo){
		cin>>n;
		if(m>=n){
			m-=n;
		}else{
			count++;
		}
		peo--;
	}
	cout<<count<<endl;
	return 0;
}
