/*
7. set:
stores unique elements only
if arr= [5,5,5,5,5], set will have only [5]
implemented using BST.
cant delete elements
elements are returned in sorted order, when fetched

unordered set:
elements are not sorted & returned.
faster than set.

insert, find, erase, count- O(n)
size, begin, empty, end - O(1)
*/
#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(2);
    s.insert(4);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(1);

    for (auto i : s)
    {
        cout << i << " " << endl;
    }
    cout << endl;

    // deletes first element
    s.erase(s.begin());
    for (auto i : s)
    {
        cout << i << " " << endl;
    }

    cout << endl;

    // delete a list of elements
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    for (auto i : s)
    {
        cout << i << " " << endl;
    }

    cout << endl;

    cout << "5 is present or not: " << s.count(5) << endl;

    // Iterators are used to point at the memory addresses of STL containers.
    //  returns iterator of 5-> pointer to 5
    set<int>::iterator itr = s.find(5);

    cout << "value present at itr: " << *it << endl;

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
    return 0;
}