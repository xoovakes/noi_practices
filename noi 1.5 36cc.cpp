#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int n;float x;
	cin>>x>>n;
	float total=0;
	for(int i=n;i>=0;i--){
		total+=pow(x,i); 
	}
	printf("%.2f",total);
	return 0;
}
