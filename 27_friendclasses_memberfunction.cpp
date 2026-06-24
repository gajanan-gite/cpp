#include <iostream>
using namespace std;

// forword declaration
class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealcomplex(complex, complex);
    int sumcompcomplex(complex, complex);
};
class complex
{

    int a, b;

public:
//  individually declareing functions as friends
//  friend int calculator ::sumRealcomplex(complex, complex);
//  friend int calculator ::sumcompcomplex(complex, complex);


//  aliter declaring the entire calculator class as friend
    friend class calculator;
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printnumber()
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};

int calculator ::sumRealcomplex(complex o1, complex o2)
{
    return o1.a + o2.a;
}
int calculator ::sumcompcomplex(complex o1, complex o2)
{
    return o1.b + o2.b;
}
int main()
{
    complex o1, o2;
    o1.setnumber(1, 4);
    o1.printnumber();
    o2.setnumber(2, 4);
    o2.printnumber();
    calculator calc;
    int res = calc.sumRealcomplex(o1, o2);
    cout << "sum of real part of two complex number is " << res << endl;
    int comp = calc.sumRealcomplex(o1, o2);
    cout << "sum of complex part of two complex number is " << comp << endl;


    return 0;
}