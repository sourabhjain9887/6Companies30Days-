#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, target;
    vector<int> nums;
    cin >> n >> target;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    int mini = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target || nums[i] > target)
        {
            cout << 1;
            return 0;
        }
        count = nums[i];
        // cout << count << " ";
        for (int j = i + 1; j < n; j++)
        {
            if (count + nums[j] < target)
            {
                count += nums[j];
                // cout << count << " " ;
            }
            else if (count + nums[j] == target)
            {
                count += nums[j];
                if (mini == 0)
                {
                    mini = j - i + 1;
                }
                else
                {
                    mini = min(mini, j - i + 1);
                    break;
                }
            }
            else
            {
                if (mini == 0)
                {
                    mini = j - i + 1;
                }
                else
                {
                    mini = min(mini, j - i + 1);
                    break;
                }
            }
        }
        // cout << endl;
    }
    cout << mini;
    return 0;
}
