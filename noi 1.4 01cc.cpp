#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	if(n>0)	cout<<"positive"<<endl;
	else if(n==0) cout<<"zero"<<endl;
	else if(n<0) cout<<"negative"<<endl;
}
