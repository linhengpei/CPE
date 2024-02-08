#include <bits/stdc++.h>
#include <numeric>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case;
    int length, number;
    int ans, temp;
    cin >> test_case;

    for (int i = 0; i < test_case; i++)
    {
        cin >> length;
        vector<int> train;
        for (int j = 0; j < length; j++)
        {
            cin >> number;
            train.push_back(number);
        }
        /*
        for (int j = 0; j < length; j++)
        {
            cout << train[j] << " ";
        }
        cout << endl;
        */
        ans = 0;
        for (int j = 0; j < length; j++)
        {
            for (int k = 1; k < length - j; k++)
            {
                if (train[k - 1] > train[k])
                {
                    ans += 1;
                    temp = train[k - 1];
                    train[k - 1] = train[k];
                    train[k] = temp;
                }
            }
            /*
            for (int j = 0; j < length; j++)
            {
                cout << train[j] << " ";
            }
            cout << endl;
            */
        }
        printf("Optimal train swapping takes %d swaps.\n", ans);
    }
    return 0;
}