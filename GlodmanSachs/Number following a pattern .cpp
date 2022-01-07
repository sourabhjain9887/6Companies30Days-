#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<int> st;
    string ans;
    int num = 1;
    for (auto it : s)
    {
        if (it == 'D')
        {
            st.push(num);
            num++;
        }
        else
        {
            st.push(num);
            num++;
            while (!st.empty())
            {
                ans += to_string(st.top());
                st.pop();
            }
        }
    }
    st.push(num);
    while (!st.empty())
    {
        ans += to_string(st.top());
        st.pop();
    }
    cout << ans;

    return 0;
}
