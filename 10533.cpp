#include <bits/stdc++.h>
using namespace std;
bool table[1000001] = {1, 1}; //  1 ~ 1000000
int c[1000001] = {0, 0};      //  1 ~ 1000000

int combine(int number)
{
    int ans = 0;
    while (number >= 10)
    {
        ans += number % 10;
        number /= 10;
    }
    ans += number;

    return ans;
}

int main()
{

    for (int i = 2; i < 1000000; i++)
    {
        if (table[i] == 0)
        {
            for (int j = i * 2; j < 1000000; j = j + i)
                table[j] = 1; // not prime
        }
    }

    int counter = 0;
    for (int i = 2; i < 1000000; i++)
    {
        if (table[i] == 0)
        {
            if (table[combine(i)] == 0)
                counter += 1;
        }
        c[i] = counter;
    }

    int a, b;
    int number;

    scanf("%d", &number);
    // for (int i = 0; i < number; i++)
    //     printf("%d ", c[i]);

    for (int i = 0; i < number; i++)
    {
        int ans = 0;
        scanf("%d %d", &a, &b);
        ans = c[b] - c[a - 1];
        printf("%d\n", ans);
    }

    return 0;
}
