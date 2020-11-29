#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int w;
	cin>>w;
	if(w==7){
		cout<<"YES";
		return 0;
	}
	for(int i=w;i>=0;i-=2){
		w=i;
	}
	if(w) cout<<"YES";
	else cout<<"NO";
	return 0;
}
