
// initialisation of an array at run time 

//  datatype arrayName[size]; (int takes  4 bytes of memory  )
#include<iostream>
using namespace std;
int main()
{
 int n;
 // index of an array starts from "0"
 cout<<"enter array size"<<endl;
 cin>>n;

 int array[n];
 for(int i=0;i<=n;i++)
 {

  cin>>array[i];
 }
 for(int i=0;i<=n;i++)
 {

  cout<<array[i]<<"  ";
 }
cout<<"is the array list";

  
    return 0;
}
