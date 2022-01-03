#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, ans;
    cin >> s;
    int count = 1;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
            continue;
        }
        string temp1(1, s[i]);
        ans.append(temp1);
        string demo = to_string(count);
        ans.append(demo);
        count = 1;
    }

    // for(int i=0;i<s.length();i = i+count){
    //   // cout << i << endl;
    //   string temp( 1, s[i] );
    //   //cout << i << " ";
    //   ans.append(temp);
    //   // cout << ans << endl;
    //   count=1;
    //   for(int j=i+1; j<s.length();j++){
    //       if(s[i]==s[j]){
    //           count++;
    //           continue;
    //       }
    //       // cout << count << " ";
    //             string demo = to_string(count);
    //             // cout << demo ;
    //       ans.append(demo);
    //       break;
    //   }
    //   cout << ans << " ";
    // }
    cout << ans << endl;
    return 0;
}