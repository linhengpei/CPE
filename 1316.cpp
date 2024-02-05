#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); // 不加會 TLE

    int test_case;
    while (cin >> test_case)
    {
        vector<tuple<int, int>> data;
        tuple<int, int> temp;

        for (int i = 0; i < test_case; i++)
        {
            int P, D;
            cin >> P >> D;
            temp = {D, P};
            data.push_back(temp);
        }

        sort(data.begin(), data.end()); // 按照日期排序 小 ~ 大

        priority_queue<int, vector<int>, greater<int>> pq; // 遞增
        for (int i = 0; i < data.size(); i++)
        {
            int Price, Date;
            Date = get<0>(data[i]);
            Price = get<1>(data[i]);
            if (Date > pq.size())
            {
                pq.push(Price); // O(log n)
            }
            else if (Price > pq.top()) // 當前物品 Price > pq中price的最小值
            {
                pq.pop();
                pq.push(Price);
            }
        }

        int ans = 0;
        while (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        cout << ans << endl;
    }
    return 0;
}
