#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,y;
	cin>>x>>y;
	x=abs(x);y=abs(y);
	if((x&&x-1)||(y&&y-1)) cout<<"no";
	else cout<<"yes";
	return 0;
}
