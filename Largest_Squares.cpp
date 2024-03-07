#include <bits/stdc++.h>
using namespace std;

char graph[100][100];

int find_square(int x, int y, int m, int n)
{
    int ans = 1;
    char target = graph[x][y];
    for (int edge = 1;; edge++)
    {
        for (int i = x - edge; i <= x + edge; i++)
        {
            for (int j = y - edge; j <= y + edge; j++)
            {
                if (i < 0 or i >= m or j < 0 or j >= n or graph[i][j] != target)
                    return ans + (edge - 1) * 2;
            }
        }
    }
}

int main()
{
    int test_case;
    cin >> test_case;

    for (int i = 0; i < test_case; i++)
    {
        string str;
        int ans;
        int r, c;
        int M, N, Q;
        cin >> M >> N >> Q;
        printf("%d %d %d\n", M, N, Q);

        for (int j = 0; j < M; j++)
        {
            cin >> str;
            for (int k = 0; k < N; k++)
            {
                graph[j][k] = str[k];
            }
        }

        for (int j = 0; j < Q; j++)
        {
            cin >> r >> c;

            ans = find_square(r, c, M, N);
            printf("%d\n", ans);
        }
    }
    return 0;
}
