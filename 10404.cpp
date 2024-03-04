#include <bits/stdc++.h>
using namespace std;

int result[1000001] = {};
int main()
{
    int stone;
    int num;
    while (cin >> stone >> num)
    {
        vector<int> step;
        for (int i = 0; i < num; i++)
        {
            int m;
            cin >> m;
            result[m] = 1; // first win
            step.push_back(m);
        }

        for (int i = 2; i <= stone; i++)
        {
            int flag = 0;
            for (int j = 0; j < num; j++)
            {
                if (i > step[j] and result[i - step[j]] == 2)
                {
                    result[i] = 1; // first win
                }
            }

            if (result[i] == 0)

                result[i] = 2; // second win
        }

        if (result[stone] == 1)
            printf("Stan wins\n");
        else
            printf("Ollie wins\n");

        for (int i = 0; i < 1000001; i++)
            result[i] = 0;
    }
    return 0;
}