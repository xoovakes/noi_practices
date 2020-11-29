#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b;char c;
	cin>>a>>b>>c;
	int d;
	switch(c){
	
		case '+':
			d=a+b;cout<<d;break;
		case '-':
			d=a-b;cout<<d;break;
		case '*':
			d=a*b;cout<<d;break;
		case '/':
			if(b!=0){
				d=a/b;cout<<d;
			}else{
				cout<<"Divided by zero!";
			}
			break;
		default:
			cout<<"Invalid operator!";
		}
	return 0;
 } 
