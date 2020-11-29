#include <bits/stdc++.h>
#define M 20000
using namespace std;
int main()
{
	int a[M]={0},b[M]={0},n,i,j;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	i=0;j=0;
	while(j<n){
		int flag=0;
		for(int k=0;k<i;k++){
			if(b[k]==a[j]){
				flag++;
			}
		}
		if(flag==0){
			b[i]=a[j];
			i++;
		}
		j++;
	}
	for(j=0;j<i;j++){
		cout<<b[j];
		if(j==i-1) break;
		cout<<" ";
	}
	return 0;
}
