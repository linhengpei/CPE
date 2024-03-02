#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    while (cin >> a >> b)
    {
        if (a == 0 and b == 0)
            break;

        int ans = 0;
        bool carry = 0;
        for (int i = 0; i < 10; i++)
        {
            if (carry + a % 10 + b % 10 > 9)
            {
                ans++;
                carry = 1;
            }
            else
                carry = 0;

            a /= 10;
            b /= 10;
        }

        if (ans == 0)
            printf("No carry operation.\n");
        else if (ans == 1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n", ans);
    }
    return 0;
}
