#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    while (cin >> a >> b)
    {
        int ans;
        ans = abs(a - b);
        cout << ans << endl;
    }
    return 0;
}
