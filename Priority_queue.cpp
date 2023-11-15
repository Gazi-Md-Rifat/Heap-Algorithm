#include <iostream>
#include <queue>
using namespace std;



int main()
{
    // priority queue for make heap. proirity queue make max heap on default.

    priority_queue<int> pq; // or priority_queue<int, vector<int>> pq; but by default don't need vector or container.for max heap..

    pq.push(5);
    pq.push(7);
    pq.push(10);
    pq.push(2);

    while (!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }


    priority_queue<int, vector<int>, greater<int>> data; // container and comparator is for min heap..comparator is greater<int>
    data.push(12);
    data.push(16);
    data.push(14);
    data.push(3);

    cout << endl;

    while (!data.empty()){
        cout << data.top() << " ";
        data.pop();
    }


    return 0;
}