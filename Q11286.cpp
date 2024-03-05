#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;

        map<string, int> pairs;

        for (int i = 0; i < n; i++)
        {

            string num_set = "";
            vector<string> str;
            string num;

            for (int j = 0; j < 5; j++)
            {
                cin >> num;
                str.push_back(num);
            }

            sort(str.begin(), str.end());

            for (int j = 0; j < 5; j++)
                num_set += str[j];

            str.clear();

            pairs[num_set]++;
        }

        map<string, int>::iterator it;

        int max = 0;
        int ans = 0;
        for (it = pairs.begin(); it != pairs.end(); it++)
        {
            if (it->second > max)
                max = it->second;
        }
        // cout << "max : " << max << endl;
        for (it = pairs.begin(); it != pairs.end(); it++)
        {
            if (it->second == max)
                ans += max;
        }
        cout << ans << endl;
    }
    return 0;
}
