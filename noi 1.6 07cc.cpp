#include <bits/stdc++.h>
using namespace std;
int main(){
int a[3001],b[3001],c[3001]={0};
int size,n=1;
cin>>size;
for(int i=0;i<size;i++){
cin>>a[i];
}
for(int i=0;i<size-1;i++){
b[i]=abs(a[i]-a[i+1]);
}
for(int i=1;i<size;i++){
for(int j=0;j<size-1;j++){
if(b[j]==i){
c[i-1]=i;
}
}
}
for(int i=0;i<size-1;i++){
if(c[i]!=n++){
cout<<"Not jolly";
return 0;
}
}
cout<<"Jolly";
return 0;
}//我的代码应该是循环范围出错了，就抄了个代码。 
