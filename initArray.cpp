// initialisation of an array at complie time 

//  datatype arrayName[size]; (int takes  4 bytes of memory  )

#include<iostream>
using namespace std;
int main()
{
int marks[5]; // declaration 
marks[0]=10;   // initialising 
marks[1]=20;
marks[2]=30;

string name[5] = {"devi" ,"chenna" ,"pooja"};

cout<<marks[0] <<endl <<marks[1]  <<endl <<marks[2] <<endl;
cout<<name[0]  <<endl <<name[1]  <<endl <<name[2]   <<endl;
cout<<marks[5] <<endl;  //will display random value 
cout<<marks[3] <<endl ; //will display random value 
cout<<marks[2];   // will return 30


return 0;
}
