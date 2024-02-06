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

    myset.erase(2); // �R��

    for (const auto &s : myset)
        std::cout << s << " ";
    std::cout << "\n";

    cout << myset.count(1) << endl; // �P�_�O�_�� 1
    cout << myset.count(2) << endl; // �P�_�O�_�� 2

    myset.clear();     // �M��

    if (myset.empty()) // �P�_�O�_����
        cout << "empty\n";
    else
        cout << "not empty, size is " << myset.size() << "\n";
    return 0;
}
