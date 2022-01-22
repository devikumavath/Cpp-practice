// insertion sort
// comparing two numbers and sorting in acesending order
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter array size" << endl;
    cin >> n;

    int array[n];
    cout << "enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 1; i < n; i++)
    {
        int current = array[i];
        int j = i - 1;
        while (array[j] > current && j >= 0)
        {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = current;
    }
    cout << "sorted array is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}