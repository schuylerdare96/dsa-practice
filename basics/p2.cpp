// reverse digit
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int rev = 0;
    while (n != 0)
    {
        int d = n % 10;

        // edge case: if rev*10 -> exceeds INT range
        if ((rev > INT32_MAX / 10) || (rev < INT32_MIN / 10))
            return 0;
        rev = (rev * 10) + d;
        n /= 10;
    }
    cout << rev;
    return 0;
}