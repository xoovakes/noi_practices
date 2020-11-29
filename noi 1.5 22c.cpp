#include<iostream>
#include<cstdio>
using namespace std;
int i=0;
int main()
{
	int in=300,out,save=0,y=0,y1;
	for(i=1;i<=12;i++){
		cin>>out;
		if(y>=0){
			y+=in-out;
			if(y>=100){
				save+=int(y/100.0)*100;
				y=y%100;
			}
			
		}else{
			cout<<"-"<<--i;
			break;
		}
	}
	i--;
	if(i==12) cout<<save*1.2+y;
	return 0;
} 
