#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m, n, k;
	cin >> n >> m >> k;
	if (n > m)
	{
		if (k + m - 1 >= n)
			cout << (k + m - 1) % n;
		cout << k + m - 1;
	}
	else
	{
		cout << (m % n) - 1 + k;
	}
	return 0;
}
