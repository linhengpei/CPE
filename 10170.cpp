#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int s, d;
    while (cin >> s >> d)
    {
        long long int D;
        double ans;
        D = 1 + 4 * (s * s - s + 2 * d);
        ans = (pow(D, 0.5) - 1) / 2;
        D = ceil(ans);
        // 二次方程式
        cout << D << endl;
    }
    return 0;
}
