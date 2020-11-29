#include<bits/stdc++.h>
#define M 200
using namespace std;
int main()
{
	char a[M],b[M];
	int c[M],d[M];
	a[M]=b[M]={0};c[M]=d[M]={0};
	gets(a);gets(b);
	int m,n;
	m=strlen(a);n=strlen(b);
	int l;
	if(m>n) l=m;else l=n;
	for(int i=0;i<m;i++){
		c[m-i-1]=a[i]-'0';
	}
	for(int i=0;i<n;i++){
		d[n-i-1]=b[i]-'0';
	}
	int x=0;
	for(int i=0;i<l;i++){
		c[i]=(a[i]-b[i]+x);
		if(c[i]<0){
			c[i]*=-1;
			x=-1;
		}
	}
	if(x<0){
		c[l]*=-1;
	}
	while(c[l-1]==0&&l>0) l--;
	for(int i=l-1;i>=0;i--){
		printf("%d",c[i]);
	}
	return 0;
}
