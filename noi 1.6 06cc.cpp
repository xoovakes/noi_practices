 #include <iostream>
 using namespace std;
 int main()
 {
 	bool a[10001];
	int i,j,s,e,L,M,num=0;
	cin >> L >> M;
	for (i=0;i<=L;i++) a[i] = true;
	for (i=0;i<M;i++){
		cin >> s >> e;
		for (j=s;j<=e;j++){
			a[j] = false;
		}
	} 
	for (i=0;i<=L;i++) 
		if (a[i]) num++;
	cout << num << endl;
 	return 0;
 }

