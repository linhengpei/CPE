#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    priority_queue<int> pq;

    // push() �s�W�����A������ O(log n)
    pq.push(5);
    pq.push(8);
    pq.push(4);
    // �����i���ơA�|�ӧO�O�d
    pq.push(5);
    // size() ���o�ثe�����ƶq�A������ O(1)
    cout << "size : " << pq.size() << "\n";
    // top() ���o�ثe�̰��u���]�ƭȳ̤j�^�������]���|�R���^�A������ O(1)
    cout << pq.top() << "\n";
    // pop() �R���ثe�̰��u���]�ƭȳ̤j�^�������A������ O(log n)
    pq.pop();
    cout << "size : " << pq.size() << "\n";
    
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}