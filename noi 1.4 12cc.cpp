#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int k;
	cin>>k;
	double bike,walk;
	bike=50+k/3.0;
	walk=k/1.2;
	if(bike<walk) cout<<"Bike";
	else if(bike>walk) cout<<"Walk";
	else if(bike==walk) cout<<"All";
	return 0;
}
