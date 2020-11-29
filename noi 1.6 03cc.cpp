#include<bits/stdc++.h>
#define MAX 10
using namespace std;
int main()
{
	float a[MAX]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
	float b[MAX]={0};
	for(int i=0;i<10;i++){
		cin>>b[i];
	}
	float tot=0;
	for(int i=0;i<10;i++){
		tot+=a[i]*b[i];
	}
	cout<<tot;
	return 0;
 } 
