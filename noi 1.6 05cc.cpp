#include<bits/stdc++.h>
#define MAX 4
using namespace std;
int main()
{
	int a[MAX]={0},n;
	cin>>n;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x>=0&&x<=18) a[0]++;
		if(x>=19&&x<=35) a[1]++;
		if(x>=36&&x<=60) a[2]++;
		if(x>=61) a[3]++;
	}
	for(int i=0;i<MAX;i++){
		printf("%.2f%%\n",a[i]*100.0/n);
	}
	return 0;
}
