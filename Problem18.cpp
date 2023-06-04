#include <bits/stdc++.h>
using namespace std;

vector<float> ans;

int main(void)
{
    long double t, l, x, y, q;
    cin >> t >> l >> x >> y >> q;

    for (int i = 0; i < q; i++)
    {
        long double e;
        cin >> e;
        long double theta = M_PI * e / t * 2;
        long double cx = 0;
        long double cy = -(l / 2) * sin(theta);
        long double cz = l / 2 - (l / 2) * cos(theta);
        long double anstheta = atan2(cz, sqrt(x * x + (cy - y) * (cy - y))) * 180L / M_PI;
        ans.push_back(anstheta);
    }

    for (long double i : ans)
    {
        printf("%.12Lf\n", i);
    }

    return 0;
}