#include<bits/stdc++.h>
#define MAX 200
using namespace std;
int main()
{
	char z[200]={0},h[200]={0};
	int a[200]={0},b[200]={0},c[200]={0};
	int n,m,l,x=0;
	gets(z);
	gets(h);//�����ַ���
	n=strlen(z);
	m=strlen(h);//ȡ����
	for(int i=0;i<n;i++){
		a[n-i-1]=z[i]-'0';
	}
	for(int i=0;i<m;i++){
		b[m-i-1]=h[i]-'0';
	}//����ת��
	if(n<m) l=m;
	else l=n;//ȡ�ϳ��ĳ���
	for(int i=0;i<l;i++){
		c[i]=(a[i]-b[i]-x)%10;
		x=(a[i]-b[i]-x)/10;//��λ
	}
	if(x>0){
		c[l]=x;
		l++;//��߽�λ
	}
	for(;c[l-1]==0&&l>1;)
	l--;//ȥ��
	for(int i=l-1;i>=0;i--){
		printf("%d",c[i]);//���
	}
	return 0;
}
