#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<string> v;
	for (int i = 0; i < n; i++)
	{
		string temp;
		cin >> temp;
		v.push_back(temp);
	}
	unordered_map<string, vector<string>> m;
	for (int i = 0; i < v.size(); i++)
	{
		string temp = v[i];
		// cout << temp;
		sort(temp.begin(), temp.end());
		// cout << " " << temp << endl;
		m[temp].push_back(v[i]);
	}

	unordered_map<string, vector<string>>::iterator it;
	for (it = m.begin(); it != m.end(); it++)
	{
		// cout << it->first << endl;
		vector<string> temp = it->second;

		for (int i = 0; i < temp.size(); i++)
		{
			cout << temp[i] << " ";
		}
		cout << endl;
	}

	return 0;
}
