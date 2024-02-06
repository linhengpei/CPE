#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    priority_queue<int> pq;

    // push() 新增元素，複雜度 O(log n)
    pq.push(5);
    pq.push(8);
    pq.push(4);
    // 元素可重複，會個別保留
    pq.push(5);
    // size() 取得目前元素數量，複雜度 O(1)
    cout << "size : " << pq.size() << "\n";
    // top() 取得目前最高優先（數值最大）的元素（不會刪掉），複雜度 O(1)
    cout << pq.top() << "\n";
    // pop() 刪掉目前最高優先（數值最大）的元素，複雜度 O(log n)
    pq.pop();
    cout << "size : " << pq.size() << "\n";
    
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}