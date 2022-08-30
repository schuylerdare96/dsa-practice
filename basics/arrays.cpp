#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        /* code */
    }
}
int main()
{
    int number[15];

    // prints 0 but could be anything
    cout << number[0];

    int num2[15] = {2, 4};

    for (int i = 0; i < sizeof(num2); i++)
    {
        /* code */
        cout << num2[i];
    }

    cout << num2;
    return 0;
}