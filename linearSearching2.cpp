// searching of an element in an array with functions

#include <iostream>
using namespace std;

int linearSearch(int array[], int n, int key)
{
    for (int i = 0; i <= n; i++)
    {
        if (key == array[i])
        {

            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "enter the size of the array" << endl;
    cin >> n;

    cout << "enter array elements" << endl;
    int array[n];
    for (int i = 0; i <= n; i++)
    {
        cin >> array[i];
    }

    int key;
    cout << "enter the number you want to search" << endl;
    cin >> key;

    cout << linearSearch(array, n, key);
    return 0;
}