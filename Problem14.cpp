#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b.at(i);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += abs(a.at(i) - b.at(i));
    }
    cout << ans << endl;
    return 0;
}