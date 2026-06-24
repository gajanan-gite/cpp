#include<iostream>
using namespace std;

int main()
{

// ####  POINTERS
// data type which holds the address of other data types

int a=3;
int* b= &a;
// &---> (address of) operator
cout<<"The address of a is "<<&a<<endl;
cout<<"The address of a is "<<b<<endl;

// *---> (value at) dereferance operator
cout<<"The value at the address b is "<<*b<<endl;
cout<<"The value at the address b is "<<*&a<<endl;


//  POINTERS TO POINTERS

int**c = &b;
cout<<"The address of b is "<<&b<<endl;
cout<<"The address of a is "<<c<<endl;
cout<<"The value at the address c is "<<*c<<endl;
cout<<"The value at the address value_at(value_at(c)) is "<<**c<<endl;



return 0;
}