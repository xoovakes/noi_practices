#include<cstdio>
int main()
{
	int n,c;
	scanf("%d",&n);
	if(!n)
	{
		printf("0");
		return 0;
	}
	for(int i=n;i>0;i--)
	{
		scanf("%d",&c);
		printf("%d ",c*i);
	}
	return 0;
	//�������� 
}
