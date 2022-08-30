/*
4. list: implemented using doubly LL
not contigous
Ex: a.at(4)-> this cant be done
need to traverse each element of LL until we reach there.
*/
#include <list>
#include <iostream>
using namespace std;
int main()
{
    list<int> l;

    // copying list
    list<int> n(l);
    for (int i : n)
    {
        cout << i << " ";
    }

    cout << endl;

    list<int> m(5, 100);
    for (int i : m)
    {
        cout << i << " ";
    }

    cout << endl;
    // o(1)
    l.push_back(1);
    l.push_front(2);

    for (int i : l)
    {
        cout << i << " ";
    }

    cout << endl;

    // o(n)-> erase traverses that list until that position then deletes
    l.erase(l.begin());
    return 0;
}