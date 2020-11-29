#include<bits/stdc++.h>
#define MAX 200
using namespace std;
int main()
{
	char z[200]={0},h[200]={0};
	int a[200]={0},b[200]={0},c[200]={0};
	int n,m,l,x=0;
	gets(z);
	gets(h);//输入字符串
	n=strlen(z);
	m=strlen(h);//取长度
	for(int i=0;i<n;i++){
		a[n-i-1]=z[i]-'0';
	}
	for(int i=0;i<m;i++){
		b[m-i-1]=h[i]-'0';
	}//倒序转整
	if(n<m) l=m;
	else l=n;//取较长的长度
	for(int i=0;i<l;i++){
		c[i]=(a[i]-b[i]+x);
		if(c[i]<0){
			c[i]*=-1;
			x=-1;
		}//进位
	}
	if(x>0){
		c[l]=x;
		l++;//最高进位
	}
	for(;c[l-1]==0&&l>1;)
	l--;//去零
	for(int i=l-1;i>=0;i--){
		printf("%d",c[i]);//输出
	}
	return 0;
}
