#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    if (s[0] == '0')
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        int onedig = s[i - 1] - '0';
        int twodig = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
        if (onedig >= 1)
            dp[i] += dp[i - 1];
        if (twodig >= 10 && twodig <= 26)
            dp[i] += dp[i - 2];
    }
    cout << dp[n];

    return 0;
}
