#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int m,n,l;char c;
	cin>>m>>n>>c>>l;
	for(int i=1;i<=m;i++){
		cout<<c;
		for(int j=2;j<=n-1;j++){
			if(i==1||i==m) cout<<c;
			else{
				if(l==0) cout<<" ";
				if(l==1) cout<<c;
			}
		}
		cout<<c<<endl;
	}
	return 0;
}
