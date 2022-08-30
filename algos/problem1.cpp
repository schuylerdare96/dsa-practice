/** find 1st & last occurence of key in array
 * [0,1,1,2,3,4,4], key=4
 * op: 5, 6
 **/

#include <iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;

    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int lastOccurence(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;

    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[10] = {0, 1, 1, 2, 4, 4};

    return 0;
}