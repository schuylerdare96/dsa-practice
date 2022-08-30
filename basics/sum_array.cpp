#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n;
    int a[100];

    cout << "Enter n: " << endl;
    cin >> n;
    if (n > 100)
        exit(0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "sum: " << sum(a, n);

    return 0;
}