#include <bits/stdc++.h>
#include <numeric>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int X_edge, Y_edge;
    char dir; // E S W N
    int x, y;
    bool point[51][51]; // 0 ~ 50

    cin >> X_edge >> Y_edge;

    for (int i = 0; i <= 50; i++)
        for (int j = 0; j <= 50; j++)
            point[i][j] = 0;

    while (cin >> x >> y >> dir)
    {
        bool lost = 0;
        string command;
        cin >> command;

        for (int i = 0; i < command.length(); i++)
        {
            if (command[i] == 'L')
            {
                if (dir == 'E')
                    dir = 'N';
                else if (dir == 'S')
                    dir = 'E';
                else if (dir == 'W')
                    dir = 'S';
                else if (dir == 'N')
                    dir = 'W';
            }
            else if (command[i] == 'R')
            {
                if (dir == 'E')
                    dir = 'S';
                else if (dir == 'S')
                    dir = 'W';
                else if (dir == 'W')
                    dir = 'N';
                else if (dir == 'N')
                    dir = 'E';
            }
            else if (command[i] == 'F')
            {
                if (dir == 'E')
                {
                    if (x == X_edge)
                    {
                        if (point[x][y] == 0) // 出界
                        {
                            lost = 1;
                            point[x][y] = 1;
                            break;
                        }
                    }
                    else
                        x += 1;
                }
                else if (dir == 'S')
                {
                    if (y == 0)
                    {
                        if (point[x][y] == 0) // 出界
                        {
                            lost = 1;
                            point[x][y] = 1;
                            break;
                        }
                    }
                    else
                        y -= 1;
                }
                else if (dir == 'W')
                {
                    if (x == 0)
                    {
                        if (point[x][y] == 0) // 出界
                        {
                            lost = 1;
                            point[x][y] = 1;
                            break;
                        }
                    }
                    else
                        x -= 1;
                }
                else if (dir == 'N')
                {
                    if (y == Y_edge)
                    {
                        if (point[x][y] == 0) // 出界
                        {
                            lost = 1;
                            point[x][y] = 1;
                            break;
                        }
                    }
                    else
                        y += 1;
                }
            }
            // printf("%c ", command[i]);
        }

        if (lost)
            printf("%d %d %c LOST\n", x, y, dir);
        else
            printf("%d %d %c\n", x, y, dir);
        /*
        printf("X_edge : %d , Y_edge : %d \n", X_edge, Y_edge);
        for (int j = Y_edge; j >= 0; j--)
        {
            for (int i = 0; i <= X_edge; i++)
                printf("%d ", point[i][j]);
            printf("\n");
        }
        */
    }

    return 0;
}