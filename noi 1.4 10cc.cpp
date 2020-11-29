#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int yu,shu;
	cin>>yu>>shu;
	int t=0;
	if(yu<60){
		t++;
		if(shu<60) t--;
	}else{
		if(shu<60) t++;
	}
	cout<<t;
	return 0;
}
