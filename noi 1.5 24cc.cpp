#include<iostream>
#include<cstdio>
using namespace std;
int i=0;
int main()
{
	int n;
	cin>>n;
	int a,b,count=0,max=count;
	while(n){
		cin>>a>>b;
		if((a>=90&&a<=140)&&(b>=60&&b<=90)){
			count++;
		}else count=0;
		if(max<count) max=count;
		n--;
	}
	cout<<max<<endl;
} 
