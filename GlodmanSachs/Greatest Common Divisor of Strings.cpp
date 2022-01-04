#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int main()
{
	string str1, str2, ans = "";
	cin >> str1 >> str2;
	if (str1 + str2 == str2 + str1)
	{
		cout << str1.substr(0, gcd(str1.length(), str2.length()));
	}
	else
	{
		cout << -1;
	}
	return 0;
}
