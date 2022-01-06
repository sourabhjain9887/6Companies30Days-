// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int *findTwoElement(int *arr, int n)
    {
        // code here
        sort(arr, arr + n);
        int *res = new int[2];
        int rep = 0;
        int min = 0;
        long long int sum = 0;
        long long int sum1 = 0;
        sum1 = n * (n + 1) / 2;
        // cout << sum1 <<  " ";
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                rep = arr[i];
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        sum = sum - rep;
        // cout << sum << " " << sum1-sum << " ";
        if (sum < sum1)
        {
            res[0] = rep;
            res[1] = sum1 - sum;
            return res;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[0] != 1)
            {
                min = 1;
                break;
            }
            if (arr[i] + 1 != arr[i + 1] && arr[i] + 2 == arr[i + 1])
            {
                min = arr[i] + 1;
            }
        }
        res[0] = rep;
        res[1] = min;
        return res;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
} // } Driver Code Ends