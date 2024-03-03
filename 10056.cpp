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
        int N, I;
        double P;
        double ans;
        cin >> N >> P >> I;
        ans = P / (1 - pow(1 - P, N));
        ans = ans * pow(1 - P, I - 1);
        cout << fixed << setprecision(4) << ans << endl;
    }
    return 0;
}
