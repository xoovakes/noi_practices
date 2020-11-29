#include<iostream>
using namespace std;
int main()
{
	double k,sum=0,t=200;
	int n;
	cin>>n>>k;
	k*=0.01;
	for(int y=0;y<20;y++){
		sum+=n;
		if(sum>=t){
			cout<<y+1;
			break;
		}
		t*=1+k;
		if(y==20) cout<"Impossible";
	}
	return 0;
}
