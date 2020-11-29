#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int r,m,y;
	cin>>r>>m>>y;
	double total=m;
	for(int i=0;i<y;i++){
		total *= (1+0.01*r);
	}
	printf("%d",(int)total);
	return 0;
 } 
