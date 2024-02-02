#include <bits/stdc++.h>
#include <numeric>
using namespace std;
struct factory
{
    string fac_name;
    int lower;
    int upper;
};

int main()
{
    int test_number;
    cin >> test_number;
    for (int k = 0; k < test_number; k++)
    {
        int fac_number;
        int q_number;
        vector<struct factory> database;
        vector<int> price;

        cin >> fac_number;
        for (int i = 0; i < fac_number; i++)
        {
            struct factory fac;
            cin >> fac.fac_name;
            cin >> fac.lower;
            cin >> fac.upper;
            database.push_back(fac);
        }
        /*
        for (int i = 0; i < fac_number; i++)
        {
            cout << database[i].fac_name << endl;
            cout << database[i].lower << endl;
            cout << database[i].upper << endl;
        }
        */
        string answer = "UNDETERMINED";
        cin >> q_number;
        for (int i = 0; i < q_number; i++)
        {
            int p;
            cin >> p;

            for (int j = 0; j < fac_number; j++)
            {
                if (p >= database[j].lower && p <= database[j].upper)
                {
                    if (answer != "UNDETERMINED")
                    {
                        answer = "UNDETERMINED";
                        break;
                    }
                    else
                    {
                        answer = database[j].fac_name;
                    }
                }
            }
            cout << answer << endl;
            answer = "UNDETERMINED";
        }
    }
    return 0;
}