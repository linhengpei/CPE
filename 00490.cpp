#include <bits/stdc++.h>
#include <numeric>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> sentence;
    string str;
    int max_length = 0;
    while (getline(cin, str))
    {
        if (str.length() > max_length)
            max_length = str.length();
        sentence.push_back(str);
        // cout << str << endl;
        // cout << "length : " << str.length() << endl;
    }
    // cout << "case : " << testcase << endl;
    // cout << "max length : " << max_length << endl;
    /*
    for (int i = 0; i < sentence.size(); i++)
        cout << sentence[i] << endl;
    */

    for (int i = 0; i < max_length; i++)
    {
        for (int j = sentence.size() - 1; j >= 0; j--)
        {
            if (i < sentence[j].length())
                cout << sentence[j][i];
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}