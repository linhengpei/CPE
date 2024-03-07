#include <bits/stdc++.h>
using namespace std;

int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{
    int n;
    cin >> n;

    vector<int> seq;
    int dp[n];

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        seq.push_back(num);
        dp[i] = 1;
    }

    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            if (seq[i] > seq[j])
                dp[i] = max(dp[j] + 1, dp[i]);
                
    int ans = 1;
    for (int i = 1; i < n; i++)
        if (dp[i] > ans)
            ans = dp[i];

    printf("%d\n", ans);
    return 0;
}
