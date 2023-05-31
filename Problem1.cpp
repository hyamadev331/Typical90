#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, l, k;
    cin >> n >> l >> k;
    vector<int> a;
    a.push_back(0);
    int left = 0, right = l;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        a.push_back(num);
    }
    a.push_back(l);

    while (left != right)
    {
        int mid = (left + right + 1) / 2;
        int cnt = 0, sum = 0;
        for (int i = 0; i < a.size() - 1; i++)
        {
            sum += a[i + 1] - a[i];
            if (sum >= mid)
            {
                cnt++;
                sum = 0;
            }
        }
        if (cnt > k)
        {
            left = mid;
        }
        else
        {
            right = mid - 1;
        }
    }
    cout << (left + right) / 2 << endl;
    return 0;
}