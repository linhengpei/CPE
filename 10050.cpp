#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case;
    cin >> test_case;
    for (int t = 0; t < test_case; t++)
    {
        int day;
        int num;
        vector<int> schedule;
        vector<int> hartal;

        cin >> day;
        cin >> num;

        for (int i = 0; i < day; i++)
            schedule.push_back(0);

        for (int i = 0; i < num; i++)
        {
            int pos;
            cin >> pos;
            hartal.push_back(pos);
        }

        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j < day; j++)
                if (j % hartal[i] == hartal[i] - 1)
                    schedule[j] = 1;
        }

        int day_off = 0;
        for (int i = 0; i < day; i++)
        {
            if (schedule[i] and i % 7 != 5 and i % 7 != 6)
                day_off++;
        }
        // printf("%d ", schedule[i]);

        printf("%d\n", day_off);
    }
    return 0;
}
