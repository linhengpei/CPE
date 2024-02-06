#include <bits/stdc++.h>
#include <numeric>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    std::set<int> myset{1, 2, 4, 5};

    myset.insert(2);
    myset.insert(5);
    myset.insert(4);
    myset.insert(5);
    myset.insert(4);

    set<int>::iterator it;
    for (it = myset.begin(); it != myset.end(); it++)
        std::cout << *it << " ";
    std::cout << "\n";

    myset.erase(2); // 刪除

    for (const auto &s : myset)
        std::cout << s << " ";
    std::cout << "\n";

    cout << myset.count(1) << endl; // 判斷是否有 1
    cout << myset.count(2) << endl; // 判斷是否有 2

    myset.clear();     // 清空

    if (myset.empty()) // 判斷是否為空
        cout << "empty\n";
    else
        cout << "not empty, size is " << myset.size() << "\n";
    return 0;
}
