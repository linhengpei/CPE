#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    while (cin >> N)
    {
        if (N == 0)
            break;

        int dp[N + 1] = {}; // 1 ~ N
        int m;
        for (m = 1;; m++)
        {
            for (int i = 2; i <= N; i++)
                dp[i] = (dp[i - 1] + m) % i;
            if (dp[N - 1] == 11)
                break;
        }
        printf("%d\n", m);
    }
    return 0;
}
