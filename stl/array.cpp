// 1. array: static

#include <iostream>
#include <array>
using namespace std;
int main()
{
    int basic[3] = {1, 7, 3};

    // drawback- static
    array<int, 4> a = {1, 2, 3, 4};

    cout << a.at(2) << endl;
    cout << a.empty() << endl;
    cout << a.front() << endl;
    cout << a.back() << endl;
}