#include <bits/stdc++.h>
using namespace std;

int MAX = 10001;
int prime[10001] = {};
vector<int> P;
int main()
{
    for (int i = 2; i < MAX; i++)
    {
        if (prime[i] == 0) // is prime
        {
            P.push_back(i);
            for (int j = 2; j * i < MAX; j++)
            {
                prime[j * i] = 1;
            }
        }
    }
    int number;
    while (1)
    {
        int ans = 0;
        cin >> number;
        if (number == 0)
            break;

        for (int i = 0; P[i] <= number; i++)
        {
            int sum = 0;
            for (int j = i; sum < number; j++)
            {
                sum += P[j];
                if (sum == number)
                    ans++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}