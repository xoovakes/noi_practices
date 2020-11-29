#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int n, i, x=0, y=0;
    double a[300], maxd, mind, sum=0.0, avg, deviation=0.0;
    cin >> n;
    for (i=0; i<n; i++){
        cin >> a[i];
        if (i == 0) maxd=mind=a[i];
        if (a[i] > maxd){
            x = i;
            maxd = a[i];
        }
        if (a[i] < mind){
            y = i;
            mind = a[i];
        }
        sum += a[i];
    }
    sum -= maxd;
    sum -= mind;
    avg = sum / (n-2);
    for (i=0; i<n; i++){
        if (i==x || i==y) continue;
        double d = fabs(a[i]-avg);
        if (d > deviation) deviation = d;
    }
    cout << fixed << setprecision(2) << avg << " ";
    cout << fixed << setprecision(2) << deviation << endl;
    return 0;
}
