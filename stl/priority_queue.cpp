/*
6. priority_queue:
MAX_HEAP: queue in which first elemnt is greatest.
MIN_HEAP: queue in which first element is smallest.
*/
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // defuault is MAX_HEAP- when fetched, the greatest elemnt is returned.
    priority_queue<int> maxi;
    maxi.push(1);
    maxi.push(3);
    maxi.push(5);
    maxi.push(2);

    int n = maxi.size();
    // for (int i = 0; i < maxi.size(); i++) - size changes after every pop
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }

    cout << endl;

    // min-heap
    priority_queue<int, vector<int>, greater<int>> mini;
    mini.push(1);
    mini.push(3);
    mini.push(5);
    mini.push(2);

    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << mini.empty() << endl;

    return 0;
}