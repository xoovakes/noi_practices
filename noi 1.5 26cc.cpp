#include<iostream>
#include<cstdio>
using namespace std;
int number(void)
{
	
}
int main()
{
	int n;
	cin>>n;
	int a,b=0;
	while(n){
		cin>>a;
		for(int i=0;i<=9;i++)
		for(int j=0;j<=9;j++)
		for(int k=0;k<=9;k++)
		for(int l=0;l<=9;l++){
			if(a==i*1000+j*100+k*10+l)
				if(l>i+j+k) b++;
			continue;
		}
		n--;
	}
	cout<<b;
	return 0;
}
