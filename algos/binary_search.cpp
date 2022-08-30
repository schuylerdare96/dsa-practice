#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
            return mid;

        else if (key > arr[mid])
            s = mid + 1;

        else
            e = mid - 1;

        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    int arr[20] = {2, 3, 6, 8, 21};
    cout << "Index is: " << binarySearch(arr, 5, 8) << endl;

    return 0;
}
