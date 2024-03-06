#include <bits/stdc++.h>
using namespace std;

long long int dp[30001] = {};
int coin[11] = {5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};
int main()
{
    dp[0] = 1;

    for (int i = 0; i < 11; i++)
    {
        for (int j = coin[i]; j <= 30000; j++)
        {
            dp[j] = dp[j] + dp[j - coin[i]];
        }
    }

    double n;
    int index;
    while (cin >> n)
    {
        if (n == 0.0)
            break;
        int index = int(100 * n + 0.1);
        printf("%6.2f", n);
        printf("%17lld\n", dp[index]);
        //        printf("%d", int(index));
    }
    return 0;
}
