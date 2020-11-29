#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b,count=0;
	cin>>a>>b;
	if(a%19==0){
		while(a){
			if(a%10==3) count++;
			a/=10;
		}
		if(count==b) cout<<"YES";else cout<<"NO";
	}else cout<<"NO";
	return 0;
}
