#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, q;
    cin >> n >> q;

    int shift = 0; // 何回シフトしたか

    vector<long long> a(n), ans;
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }

    for (int i = 0; i < q; i++)
    {
        int t, x, y;
        cin >> t >> x >> y;
        if (t == 1)
        {
            int tmp = a.at((x - 1 + shift) % n);
            a.at((x - 1 + shift) % n) = a.at((y - 1 + shift) % n);
            a.at((y - 1 + shift) % n) = tmp;
        }
        else if (t == 2)
        {
            shift = (shift - 1 + n) % n;
        }
        else
        {
            ans.push_back(a.at((x - 1 + shift) % n));
        }
    }

    for (auto &i : ans)
    {
        cout << i << endl;
    }

    return 0;
}