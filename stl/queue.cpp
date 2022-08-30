/*
5. queue: fifo
*/
#include <queue>
#include <iostream>
using namespace std;
int main()
{
    queue<string> q;

    q.push("a");
    q.push("s");

    q.pop();

    cout << " " << q.front() << endl;

    cout << q.empty() << endl;
    return 0;
}