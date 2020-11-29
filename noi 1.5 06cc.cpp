#include<cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int a,max=1,min=1000;
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		if(max-a<0) max=a;
		if(min-a>0) min=a;
	}
	printf("%d",max-min);
	return 0;
 } 
