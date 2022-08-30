/*
8. map: key-value pair
all keys are unique
each key points to a unique value
*/

#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;

    m[2] = "ansul";
    m[3] = "kausik";
    m.insert({4, "car"});
    // print keys
    for (auto i : m)
    {
        cout << i.first << " " << i.second << " " << endl;
    }
    return 0;
}