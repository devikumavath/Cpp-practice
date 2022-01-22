// binary search 
#include <iostream>
using namespace std;
// declaring  a function
int binarySearch(int array[], int n, int key)
{
  int start = 0;
  int end = n;
  while (start <= end)
  {
    int mid = (start + end) / 2;

    if (array[mid] == key)
    {
      return mid;
    }
    else if (array[mid] > key)
    {

      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }
  return -1;
}

int main()
{

  // enter the size of an array
  int n, i;
  int array[n];

  cout << "enter the size of an array" << endl;
  cin >> n;

  // input an array elements
  cout << "enter the array elements" << endl;
  for (int i = 0; i <= n; i++)
  {
    cin >> array[i];
  }

  // enter the key to search
  int key;
  cout << "enter the key to be searched " << endl;
  cin >> key;

  // calling a function
  cout << binarySearch(array, n, key);

  return 0;
}
