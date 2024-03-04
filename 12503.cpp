#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int test_case;
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
    {
        int inst_num, pos = 0;
        string inst;
        vector<int> inst_set;
        cin >> inst_num;
        for (int j = 0; j < inst_num; j++)
        {
            cin >> inst;
            if (inst == "LEFT")
            {
                pos -= 1;
                inst_set.push_back(-1);
            }
            else if (inst == "RIGHT")
            {
                pos += 1;
                inst_set.push_back(1);
            }
            else if (inst == "SAME")
            {
                int index;
                cin >> inst >> index;
                pos += inst_set[index - 1];
                inst_set.push_back(inst_set[index - 1]);
            }
        }
        cout << pos << endl;
    }
    return 0;
}