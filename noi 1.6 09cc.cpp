#include<bits/stdc++.h>
#define MAX 1000
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[MAX],b[MAX];
    for(int i=0;i<n;i++){
    	cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	int tot=0;
	for(int i=0;i<n;i++){
		tot+=a[i]*b[i];
	}
	cout<<tot;
    return 0;
}
