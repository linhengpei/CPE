#include <bits/stdc++.h>
#include <numeric>
using namespace std;

void two_base(int x)
{
    int ans = 0;
    while (x != 0)
    {
        if (x % 2 == 0)
        {
            x /= 2;
        }
        else
        {
            x -= 1;
            ans++;
        }
    }
    printf("%d ", ans);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case;
    cin >> test_case;

    for (int i = 0; i < test_case; i++)
    {
        int number, index = 0;
        int ans = 0;
        int num[10];
        cin >> number;
        two_base(number);

        while (number != 0)
        {
            num[index] = number % 10;
            // printf("%d", num[index]);
            number /= 10;
            index++;
        }

        for (int i = 0; i < index; i++)
        {
            if (num[i] == 7)
                ans += 3;
            else if (num[i] == 3 || num[i] == 5 || num[i] == 6 || num[i] == 9)
                ans += 2;
            else if (num[i] == 1 || num[i] == 2 || num[i] == 4 || num[i] == 8)
                ans += 1;
        }

        printf("%d\n", ans);
    }
    return 0;
}
