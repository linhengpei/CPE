#include <bits/stdc++.h>
using namespace std;

char Map[100][100];
bool Check[100][100];
int m, n;

void fill(int x, int y)
{
    // printf("into function : \n");
    // printf("m : %d n : %d\n", m, n);
    // printf("x : %d y : %d\n", x, y);
    Check[x][y] = 1;
    if (x - 1 >= 0 and Map[x - 1][y] == '@' and Check[x - 1][y] == 0)
        fill(x - 1, y);

    if (x - 1 >= 0 and y + 1 < n and Map[x - 1][y + 1] == '@' and Check[x - 1][y + 1] == 0)
        fill(x - 1, y + 1);

    if (y + 1 < n and Map[x][y + 1] == '@' and Check[x][y + 1] == 0)
        fill(x, y + 1);

    if (x + 1 < m and y + 1 < n and Map[x + 1][y + 1] == '@' and Check[x + 1][y + 1] == 0)
        fill(x + 1, y + 1);

    if (x + 1 < m and Map[x + 1][y] == '@' and Check[x + 1][y] == 0)
        fill(x + 1, y);

    if (x + 1 < m and y - 1 >= 0 and Map[x + 1][y - 1] == '@' and Check[x + 1][y - 1] == 0)
        fill(x + 1, y - 1);

    if (y - 1 >= 0 and Map[x][y - 1] == '@' and Check[x][y - 1] == 0)
        fill(x, y - 1);

    if (x - 1 >= 0 and y - 1 >= 0 and Map[x - 1][y - 1] == '@' and Check[x - 1][y - 1] == 0)
        fill(x - 1, y - 1);

    // printf("end function : \n");
    // printf("x : %d y : %d\n", x, y);
    Map[x][y] = '*';
}

int main()
{
    while (cin >> m >> n)
    {
        int ans = 0;
        string str;

        if (m == 0)
            break;

        for (int i = 0; i < 100; i++)
            for (int j = 0; j < 100; j++)
                Check[i][j] = 0;

        for (int i = 0; i < m; i++)
        {
            cin >> str;
            for (int j = 0; j < str.length(); j++)
                Map[i][j] = str[j];
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (Map[i][j] == '@')
                {
                    fill(i, j);
                    ans++;
                }
            }
        }

        /*
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                printf("%c", Map[i][j]);
            printf("\n");
        }
        */
        printf("%d\n", ans);
    }
    return 0;
}