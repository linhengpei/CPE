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
        int num;
        vector<int> neighbor;
        cin >> num;
        for (int i = 0; i < num; i++)
        {
            int pos;
            cin >> pos;
            neighbor.push_back(pos);
        }

        sort(neighbor.begin(), neighbor.end());

        int distance = 0;
        for (int i = 0; i < num; i++)
        {
            distance += abs(neighbor[num / 2] - neighbor[i]);
        }

        printf("%d\n", distance);
    }
    return 0;
}
