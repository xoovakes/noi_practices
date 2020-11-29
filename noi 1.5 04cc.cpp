#include<cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	double a,sum=0;
	for(int i=1;i<=n;i++){
		scanf("%lf",&a);
		sum+=a;
	}
	printf("%.0lf %.5lf",sum,sum/n);
	return 0;
 } 
