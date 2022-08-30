/* 2. vector
dynamic array:
once array gets full, it makes a new arr of double size, ccopies elements of previous arr and dumps prev arr

size vs capacity:
capacity: how much memory is assigned
size: how many elements are present
*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // init techniques
    vector<int> v;
    // size 5, value 1
    vector<int> a(5, 1);

    for (int i : a)
    {
        cout << i << endl;
    }

    // size of vector
    cout << v.capacity() << endl;

    // add elements in the end of arr
    v.push_back(1);
    cout << v.size() << endl;
    cout << v.capacity() << endl;

    return 0;
}