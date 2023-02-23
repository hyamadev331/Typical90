#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int h, w;
    cin >> h >> w;
    int a[h][w];
    int sum_h[h] = {0}, sum_w[w] = {0};

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> a[i][j];
            sum_h[i] += a[i][j];
            sum_w[j] += a[i][j];
        }
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << sum_h[i] + sum_w[j] - a[i][j];
            if (j != w - 1)
            {
                cout << " ";
            }
        }
        cout << "" << endl;
    }

    return 0;
}