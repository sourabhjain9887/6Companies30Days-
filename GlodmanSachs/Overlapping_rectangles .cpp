#include <bits/stdc++.h>
using namespace std;

int main()
{
	int l1[2], r1[2], l2[2], r2[2];
	cin >> l1[0] >> l1[1] >> r1[0] >> r1[1] >> l2[0] >> l2[1] >> r2[0] >> r2[1];
	//for left and right
	if (r1[0] < l2[0] || r2[0] < l1[0])
	{
		cout << 0;
		return 0;
	}
	//for top and bottom
	if (l1[1] < r2[1] || l2[1] < r1[1])
	{
		cout << 0;
		return 0;
	}
	cout << 1;
	return 0;
}
