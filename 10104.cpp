#include <bits/stdc++.h>
using namespace std;

int A, B;

int gcd(int a, int b, int &x, int &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    int ans = gcd(b, a % b, x, y);
    int temp;

    temp = y;
    y = x - a / b * y;
    x = temp;
    return ans;
}

int main()
{
    while (cin >> A >> B)
    {
        int m, n, ans;
        ans = gcd(A, B, m, n);
        printf("%d %d %d\n", m, n, ans);
    }
    return 0;
}
