#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N, NA, NB, A[100], B[100], i, awin=0, bwin=0;
    cin >> N >> NA >> NB;
    for (i=0; i<NA; i++) cin >> A[i];
    for (i=0; i<NB; i++) cin >> B[i];
    for (i=0; i<N; i++){
        if ((A[i%NA]==0&&B[i%NB]==2) ||
            (A[i%NA]==2&&B[i%NB]==5) ||
            (A[i%NA]==5&&B[i%NB]==0))
            awin++;
        if ((B[i%NB]==0&&A[i%NA]==2) ||
            (B[i%NB]==2&&A[i%NA]==5) ||
            (B[i%NB]==5&&A[i%NA]==0))
            bwin++;
    }
    if (awin > bwin) cout << "A" << endl;
    else if (awin < bwin) cout << "B" << endl;
    else cout << "draw" << endl;
    return 0;
}

