#include<bits/stdc++.h>
#define MAX 100
using namespace std;
int main()
{
	int n,a[MAX];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int s,count=0;
	cin>>s;
	for(int i=0;i<n;i++){
		if(a[i]==s){
			count++;
		}
	}
	cout<<count;
	return 0;
}
