#include <iostream>
using namespace std;

void printArray(int a[], int count)
{
    for (int i = 0; i < count; i++)
    {
        /* code */
        cout << " " << a[i] << endl;
    }
}

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int even[4] = {4, 6, 2, 3};
    int odd[5] = {2, 3, 4, 6, 5};

    reverse(even, 4);
    reverse(odd, 5);

    printArray(even, 4);
    printArray(odd, 5);

    return 0;
}