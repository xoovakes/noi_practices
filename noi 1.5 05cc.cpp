#include<cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int a,max=0;
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		if(max-a<0) max=a;
	}
	printf("%d",max);
	return 0;
 } 
