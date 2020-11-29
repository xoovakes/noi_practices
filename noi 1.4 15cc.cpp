#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int t;
	if(a<b){
		t=a;a=b;b=t;
	}
	if(a<c){
		t=a;a=c;c=t;
	}
	cout<<a<<endl;
	return 0;
}
