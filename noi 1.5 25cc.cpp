#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b,i,j,k;
	for(i=1;i<8;i++)
		for(j=0;j<8;j++)
			for(k=0;k<8;k++){
				a=i*7*7+j*7+k;
				b=k*9*9+j*9+i;
				if(a==b){
					cout<<a<<endl;
					cout<<i<<j<<k<<endl;
					cout<<k<<j<<i<<endl;
				}
			}
	return 0;
}
