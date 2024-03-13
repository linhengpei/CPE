#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
    {
        vector<int> weight;
        int dp[201] = {1};
        int num, sum = 0;
        char ch;

        while (scanf("%d%c", &num, &ch))
        {
            sum += num;
            weight.push_back(num);
            if (ch == '\n')
                break;
        }

        for (int j = 0; j < weight.size(); j++)
        {
            for (int k = sum; k >= weight[j]; k--)
            {
                dp[k] = dp[k - weight[j]];
            }
        }
        /*
        for (int k = 0; k <= sum; k++)
        {
            printf("%d ", dp[k]);
        }
        */

        if (sum % 2 or dp[sum / 2] == 0)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
