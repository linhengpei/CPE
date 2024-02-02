#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_number;
    cin >> test_number;
    // test_number = 1;
    for (int k = 0; k < test_number; k++)
    {
        int s, a, f;
        float street = 0, avenue = 0;
        vector<int> X;
        vector<int> Y;
        cin >> s;
        cin >> a;
        cin >> f;
        for (int i = 0; i < f; i++)
        {
            int str, ave;
            cin >> str;
            cin >> ave;
            X.push_back(str);
            Y.push_back(ave);
        }
        // for (int t = 0; t < X.size(); t++)
        //      cout << X[t] << " ";
        //   cout << endl;

        sort(X.begin(), X.end());
        sort(Y.begin(), Y.end());

        // for (int t = 0; t < Y.size(); t++)
        //      cout << Y[t] << " ";

        int ans_s, ans_a; // ¤¤¦ì¼Æ
        if (f % 2 == 0)
        {
            ans_s = X[f / 2 - 1];
            ans_a = Y[f / 2 - 1];
        }
        else
        {
            ans_s = X[f / 2];
            ans_a = Y[f / 2];
        }

        cout << "(Street: " << ans_s << ", Avenue: " << ans_a << ")" << endl;
    }
    return 0;
}