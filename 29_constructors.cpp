#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    // creating a constructor
    /*constructor is special member function with the 
    same name as class. 
    its automatically invoked whenewere an object is ceated
    it is used to initialize the objects of class
    */
   complex(void);//construction declaration

       void printnumber()
    {   
        cin>>a>>b;
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};

complex::complex(void)//...>default constructor
{
    a=0;
    b=0;
}
int main()
{   complex c1,c2,c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    return 0;
}

// propertics of constuctor
/* 
1.it should be declared in public section of class
2.they are automatically invoked whenever the object is created
3.they cannot return value and do not have return type
4.it can have default arguments
5.we cannot refer to the address
 */