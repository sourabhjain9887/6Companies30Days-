#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main()
{
    int n;
    cin >> n;

    ull arr[n];
    ull ia = 0, ib = 0, ic = 0, m2 = 2, m3 = 3, m5 = 5, next = 1;
    arr[0] = 1;
    for (int i = 1; i < n; i++)
    {
        next = min(min(m2, m3), m5);
        arr[i] = next;
        if (next == m2)
        {
            ia += 1;
            m2 = arr[ia] * 2;
        }
        if (next == m3)
        {
            ib += 1;
            m3 = arr[ib] * 3;
        }
        if (next == m5)
        {
            ic += 1;
            m5 = arr[ic] * 5;
        }
    }
    cout << next;
    return 0;
}
