#include<bits/stdc++.h>
#define MAX 10
using namespace std;
int main()
{
	int a[MAX],b;
	for(int i=0;i<MAX;i++){
		cin>>a[i];
	}
	cin>>b;b+=30;
	int count=0;
	for(int i=0;i<MAX;i++){
		if(a[i]<=b){
			count++;
		}
	}
	cout<<count;
	return 0;
} 
