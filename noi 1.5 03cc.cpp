#include<cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	double f,sum=0;
	for(int i=1;i<=n;i++){
		scanf("%lf",&f);
		sum+=f;
	}
	printf("%.4lf",sum/n);
	return 0;
 } 
