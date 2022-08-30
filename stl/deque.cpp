/*
3. dequeue:
insertion & deletion can be done from both ends
not contigous
random arrays are assigned.
*/
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;

    d.push_front(1);
    d.push_back(2);
    d.push_back(2);
    d.push_back(2);
    d.push_back(2);
    d.push_front(12);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.pop_back();
    d.pop_front();

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << d.at(0) << endl;
    cout << d.empty() << endl;

    d.erase(d.begin(), d.end() + 1);
    cout << "size after erase: " << d.size() << endl;
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
