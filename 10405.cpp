#include <bits/stdc++.h>
using namespace std;

int max(int x, int y)
{
    if (x < y)
        return y;
    else
        return x;
}

int main()
{
    string S1, S2;
    while (cin >> S1 >> S2)
    {
        int m = S1.length() + 1;
        int n = S2.length() + 1;
        int length[n][m];

        for (int i = 0; i < n; i++)
            length[i][0] = 0;

        for (int i = 0; i < m; i++)
            length[0][i] = 0;

        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (S1[j - 1] == S2[i - 1])
                    length[i][j] = length[i - 1][j - 1] + 1;
                else
                    length[i][j] = max(length[i - 1][j], length[i][j - 1]);
            }
        }
        /*
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << length[i][j] << " ";
            }
            cout << endl;
        }*/
        printf("%d\n", length[n - 1][m - 1]);
    }
    return 0;
}
