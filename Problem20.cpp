#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long double a, b, c;
    cin >> a >> b >> c;

    if (a < pow(c, b))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}