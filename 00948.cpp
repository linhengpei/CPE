#include <bits/stdc++.h>
#include <numeric>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> fib = {0, 1};
    int number = 0;
    int index = 0;
    while (number < 100000000)
    {
        number = fib[index] + fib[index + 1];
        index++;
        fib.push_back(number);
    }

    /*
    for (int i = 0; i < fib.size(); i++)
    {
        // cout << fib[i] << " ";
    }
    */
    int test_case;
    int temp;
    cin >> test_case;

    for (int i = 0; i < test_case; i++)
    {
        string ans = "1";
        int Index = index;
        cin >> number;
        temp = number;

        while (number < fib[Index]) // find first 1
            Index--;

        number -= fib[Index];
        Index--;

        while (number != 0)
        {
            while (number < fib[Index])
            {
                ans = ans + "0";
                /*
                cout << number << endl;
                cout << fib[Index] << endl;
                cout << "ans : " << ans << " (fib)" << endl;
                */
                Index--;
            }

            ans = ans + "1";
            number -= fib[Index];
            Index--;
        }

        // cout << " index " << Index << endl;
        for (int i = 1; i < Index; i++)
            ans = ans + '0';

        cout << temp << " = " << ans << " (fib)" << endl;
    }
    return 0;
}