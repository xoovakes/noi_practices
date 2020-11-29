#include <bits/stdc++.h>
#define M 1000
using namespace std;
int main()
{
    int n,a=0,b=0,count=0,max=0;
    cin>>n;
    cin>>a;
    for(int i=0;i<n-1;i++){
    	cin>>b;
    	if(a==b) count++;
    	else count=0;
    	if(max<count) max=count;
    	a=b;
	}
	printf("%d",max+1);
	return 0;
}
