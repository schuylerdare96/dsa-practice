#include <iostream>
using namespace std;

int update(int a[], int size)
{
    for (int i = 0; i < 3; i++)
    {
        /* code */
    }
}

int main()
{
    int a[5] = {1, 2, 3};
    update(a, 3);

    cout << "Printing in main fn: " << endl;
    for (int i = 0; i < 3; i++)
    {
        /* code */
        cout << a[i] << endl;
    }

    return 0;
}