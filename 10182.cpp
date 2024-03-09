#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    while (cin >> number)
    {
        int layer = 0;
        int remain;

        number -= 1;
        while (number > 6 * layer)
        {
            number -= 6 * layer;
            layer++;
        }

        if (layer == 0)
            printf("0 0\n");
        else
        {
            int x = layer - 1;
            int y = 1;
            int edge = layer;

            while (number > 1 && edge > 1) // lower left
            {
                number -= 1;
                edge -= 1;
                x--;
                y++;
            }

            edge = layer;
            while (number > 1 && edge > 0) // upper left
            {
                number -= 1;
                edge -= 1;
                x--;
            }

            edge = layer;
            while (number > 1 && edge > 0) // up
            {
                number -= 1;
                edge -= 1;
                y--;
            }

            edge = layer;
            while (number > 1 && edge > 0) // upper right
            {
                number -= 1;
                edge -= 1;
                x++;
                y--;
            }

            edge = layer;
            while (number > 1 && edge > 0) // lower right
            {
                number -= 1;
                edge -= 1;
                x++;
            }

            edge = layer;
            while (number > 1 && edge > 0) // down
            {
                number -= 1;
                edge -= 1;
                y++;
            }

            // printf("%d %d\n", layer, number);
            printf("%d %d\n", x, y);
        }
    }
    return 0;
}
