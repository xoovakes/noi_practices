#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int k;cin>>k;
	int a,t1,t5,t10;
	t1=t5=t10=0;
	for(int i=1;i<=k;i++){
		scanf("%d",&a);
		if(a==1) t1++;
		if(a==5) t5++;
		if(a==10) t10++;
	}
	cout<<t1<<endl<<t5<<endl<<t10;
	return 0;
 } 
