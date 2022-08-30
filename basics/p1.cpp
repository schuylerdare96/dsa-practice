// no of set bits in a number
// ex: 11 => 1011: o/p- 3

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        if (n & 1 == 1)
            count++;
        n = n >> 1;
    }
    cout << count;
    return 0;
}