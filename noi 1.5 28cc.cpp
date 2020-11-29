#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long n;cin>>n;
	while(n){
		cout<<n%10;
		n/=10;
		if(n!=0) cout<<" ";
	}
	return 0;
}
