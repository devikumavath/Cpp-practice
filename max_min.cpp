// find max and min from the array
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "how many numbers you want to compare "<<endl;
    cin >> n;

    int array[n];
 cout << "enter numbers which you want to compare"<<endl;
    for (int i = 0; i <n; i++)
    {
        cin >> array[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (int i = 0; i <n; i++)
    {
        if (array[i] > maxNo)
        {

            maxNo = array[i];
        }

        if (array[i] < minNo)
        {

            minNo = array[i];
        }
    }

    cout << "maxNO is " << maxNo << " ";
    cout << "minno is " << minNo << " ";
    return 0;
}




