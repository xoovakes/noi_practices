#include <bits/stdc++.h>
using namespace std;
int a[1001], f[1001];

int main()
{
	int n, i, j, k;
	cin >> n;
	for (i = 0; i < n; ++i)
	{
		cin >> a[i];
		f[i] = 1;
	}
	int ans = 0;
	for (i = 1; i < n; ++i)
	{
		for (j = 0; j < i; ++j)
		{
			if (a[i] > a[j])
				f[i] = max(f[j] + 1, f[i]);
		}
	}
	for (i = 0; i < n; i++)
	{
		ans = max(ans, f[i]);
	}
	cout << ans;
	return 0;
}