#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;

        vector<int> set;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            set.push_back(num);
        }

        sort(set.begin(), set.end());

        // for (int i = 0; i < set.size(); i++)
        //     printf("%d ", set[i]);

        int ans = 0;
        bool flag = 0;   // flag == 1 when find the answer  and end the for loop
        for (int i = set.size() - 1; i >= 0 && flag == 0; i--)
        {
            for (int j = 0; j < set.size() && flag == 0; j++)
            {
                for (int k = j + 1; k < set.size() && flag == 0; k++)
                {
                    for (int l = k + 1; l < set.size() && flag == 0; l++)
                    {
                        if (set[i] == set[j] + set[k] + set[l] and
                            i != j and i != k and i != l)
                        {
                            ans = set[i];
                            flag = 1;
                        }
                    }
                }
            }
        }

        if (flag == 1)
            printf("%d\n", ans);
        else
            printf("no solution\n");

        // for (int i = 0; i < set.size(); i++)
        //   printf("%d ", set[i]);
    }
    return 0;
}
