#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int len;
    while (cin >> len)
    {
        int last_num, num;
        bool jolly = 1;
        vector<bool> check;

        for (int i = 0; i < len; i++)
            check.push_back(0);

        cin >> last_num;
        for (int i = 1; i < len; i++)
        {
            int abs;
            cin >> num;
            abs = num - last_num;

            if (abs < 0)
                abs = -abs;
            last_num = num;
            if (abs < len)
                check[abs] = 1;
        }

        for (int i = 1; i < len; i++)
        {
            if (check[i] == 0)
            {
                jolly = 0;
                break;
            }
        }
        if (jolly == 1)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }
    return 0;
}
