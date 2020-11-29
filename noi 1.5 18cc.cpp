#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a,b;
	cin>>a>>b;
	double x=1.0*b/a;
	double y;
	for(int i=2;i<=n;i++){
		cin>>a>>b;
		y=1.0*b/a;
		if(y-x>0.05) cout<<"better"<<endl;
		else if(x-y>0.05) cout<<"worse"<<endl;
		else cout<<"same"<<endl;
	}
	return 0;
} 
