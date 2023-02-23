#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<string> ans;
    for (int i = 0; i < (1 << n); i++)
    {
        int left = 0, right = 0;
        string s = "";
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                s += "(";
                left++;
            }
            else
            {
                s += ")";
                right++;
                if (left < right)
                {
                    flag = false;
                }
            }
        }
        if (left == right && flag)
        {
            ans.push_back(s);
        }
    }
    sort(ans.begin(),ans.end());

    for (const auto &e:ans){
        cout << e << endl;
    }
        return 0;
}