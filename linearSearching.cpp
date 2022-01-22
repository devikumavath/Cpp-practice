//linear  searching of an element in an array without function 
#include <iostream>
using namespace std;
int main()
{
  // enter the size of an array
  int n, i;
  int array[n];
  cout << "enter the size of an array" << endl;
  cin >> n;

  // input an array elements
  cout << "enter the array elements" << endl;
  for (i = 0; i <= n; i++)
  {
    cin >> array[i];
  }

  // enter the key to search
  int key;
  cout << "enter the key to be searched " << endl;
  cin >> key;

  // searching for the key
  for (i = 0; i <= n; i++)
  {
    //comparing key with array elements
    if (key == array[i])
    {
      cout <<key <<" found at index " << i;
      break;
    }
  }
  // if all elements compared and key not found 
  if (i == n)
  {
    cout << "key not  found !!!";
  }

  return 0;
}

