#include <bits/stdc++.h>
#define M 10000
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int Fmax=0;
    int a[M]={0};
    for(int i=0;i<n;++i){
    	scanf("%d",&a[i]);
    	if(Fmax<a[i]) Fmax=a[i];
	}
	int b[Fmax+1]={0};
	for(int i=0;i<n;++i){
		b[a[i]]++;
	}
	for(int i=0;i<=Fmax;++i){
		printf("%d\n",b[i]);
	}
	return 0;
}
