#include<bits/stdc++.h>
#define N 10
using namespace std;
int main()
{
	int a[N][N]={0},n,m,i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
		cin>>a[i][j];
		}
	}
	cin>>n>>m;
	for(j=1;j<=5;j++)
	{
		swap(a[m][j],a[n][j]);
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
		cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
