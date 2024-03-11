#include <bits/stdc++.h>
using namespace std;

vector<tuple<int, int>> graph[10001]; // 10001  vector
int ans ;

int DFS(int node, int pre_node)
{
    int max_route = 0;
    for (int i = 0; i < graph[node].size(); i++)
    {
        if (get<0>(graph[node][i]) == pre_node)
            continue;
        int route;
        route = DFS(get<0>(graph[node][i]), node) + get<1>(graph[node][i]);

        if (route + max_route > ans)
            ans = route + max_route;

        if (route > max_route)
            max_route = route;
    }
    return max_route;
}

int main()
{

    char s[30];
    while (gets(s))
    {
        ans = 0;
        for (int i = 1; i <= 10000; i++)
            graph[i].clear();

        int m, n, len;
        do
        {
            if (strlen(s) == 0)
                break;
            sscanf(s, "%d %d %d", &m, &n, &len);
            graph[m].push_back({n, len});
            graph[n].push_back({m, len});
        } while (gets(s));

        DFS(1, -1);
        printf("%d\n", ans);
    }
    return 0;
}
