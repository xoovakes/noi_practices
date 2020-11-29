/* 
noi_2.6_1768    completed by @xzj
 */
#include <bits/stdc++.h>
using namespace std;
#define MAX 105
#define inf 127

int n, ans;
int dp[MAX][MAX], a[MAX][MAX], b[MAX];

int main()
{
    scanf("%d", &n);
    ans = -inf;
    int i, j, k;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
            dp[i][j] = dp[i - 1][j] + a[i][j];
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            for (k = 1; k <= n; k++)
            {
                b[k] = dp[j][k] - dp[i - 1][k];
            }
            for (k = 1; k <= n; k++)
            {
                b[k] = max(b[k - 1] + b[k], b[k]);
                ans = max(ans, b[k]);
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}