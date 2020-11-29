#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,y,n,se;
	cin>>n>>x>>y;
	se=n-ceil(1.0*y/x);
	cout<<se<<endl;
}
