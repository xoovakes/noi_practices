#include<iostream>
const double PI=3.14159;
using namespace std;
int main()
{
	int h,r;double tong;
	cin>>h>>r;
	tong=20*1000*1.0/(PI*r*r*h);
	cout<<(int)tong+1<<endl;
}
