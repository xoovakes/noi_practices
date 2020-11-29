#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int g;char c;
	cin>>g>>c;
	int energ=0;
	if(c=='y') energ=5;
	int in=0;
	if(g>1000){
		in+=4*ceil(1.0*(g-1000)/500);
	}
	int y=energ+in+8;
	cout<<y<<endl;
	return 0;
}
