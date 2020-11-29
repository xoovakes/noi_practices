#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	double h,total;
	cin>>h;
	int t=10;total=h;
	while(t){
		h/=2;
		total+=2*h;
		t--;
	}
	total-=2*h;
	cout<<total<<endl<<h<<endl;
	return 0;
}
