#include <bits/stdc++.h>
#include <numeric>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int first, second, begin, end;
    int number;

    while (cin >> first)
    {
        int ans = 0;
        cin >> second;
        if (first < second)
        {
            begin = first;
            end = second;
        }
        else
        {
            end = first;
            begin = second;
        }

        for (int i = begin; i <= end; i++)
        {
            int times = 1;
            number = i;
            while (number != 1)
            {
                if (number % 2 == 1)
                    number = 3 * number + 1;
                else
                    number /= 2;
                times++;
            }
            if (times > ans)
                ans = times;
        }

        printf("%d %d %d\n", first, second, ans);
    }

    return 0;
}