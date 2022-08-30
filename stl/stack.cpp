/*
5. stack: lifo
*/
#include <stack>
#include <iostream>
using namespace std;
int main()
{
    stack<string> s;

    s.push("a");
    s.push("s");

    cout << "top element: " << s.top();
    cout << endl;

    cout << s.empty() << endl;
    return 0;
}