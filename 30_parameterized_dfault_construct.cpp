#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int , int); // construction declaration

    void printnumber()
    {
        // cin>>a>>b;
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};
complex::complex(int x, int y) //--->parameterized constructor as it takes  parameters

{
    a = x;
    b = y;
}
int main()
{   //Implicite call
    complex a(4,6);

    //Explicite call
    complex b=complex(5,7);
    a.printnumber();
    b.printnumber();

    return 0;
}