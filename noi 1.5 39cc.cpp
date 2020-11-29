#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long total=0;int it;
	for(int i=1;i<=n;i++){
		if(i%7==0||i/10==7||i%10==7) continue;
		it=i*i;
		total+=it;
	}
	cout<<total;
	return 0;
}
