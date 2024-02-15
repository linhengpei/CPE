#include <bits/stdc++.h>
#include <numeric>
using namespace std;

bool rule(tuple<int, char> a, tuple<int, char> b) // 自定義排序規則
{
    if (get<0>(a) > get<0>(b))
        return 1;
    else if (get<0>(a) == get<0>(b) && get<1>(a) < get<1>(b))
        return 1;
    else
        return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> str;
    vector<tuple<int, char>> Data;

    int test_case;
    string sentence;
    cin >> test_case;
    cin.ignore();

    for (int i = 0; i < test_case; i++)
    {
        getline(cin, sentence);
        str.push_back(sentence);
    }
    /*
    for (int i = 0; i < str.size(); i++)
        cout << "|" << str[i] << "| ";
    */

    for (int i = 0; i < 26; i++)
    {
        tuple<int, char> temp;
        temp = {0, i + 65};
        Data.push_back(temp);
    }

    for (int i = 0; i < str.size(); i++)
    {
        for (int j = 0; j < str[i].length(); j++)
        {
            int character = str[i][j];
            if (65 <= character && character <= 90) // upper A ~ Z
            {
                get<0>(Data[character - 65]) += 1;
            }
            else if (97 <= character && character <= 122) // lowwer a ~ z
            {
                get<0>(Data[character - 97]) += 1;
            }
        }
    }
    /*
    for (int i = 0; i < Data.size(); i++)
        cout << get<1>(Data[i]) << " " << get<0>(Data[i]) << " ";
    */
    sort(Data.begin(), Data.end(), rule);

    for (int i = 0; i < Data.size(); i++)
    {
        if (get<0>(Data[i]) != 0)
            cout << get<1>(Data[i]) << " " << get<0>(Data[i]) << endl;
    }
    return 0;
}