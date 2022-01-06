#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int sum = 0;
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    while (n != 0)
    {
        sum += n * n;
        n--;
    }
    cout << sum;

    return 0;
}
