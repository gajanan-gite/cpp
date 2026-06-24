#include<iostream>
using namespace std;

class complex{

    int a, b;
    public:
        void setnumber(int n1,int n2)
        {
            a=n1;
            b=n2;
        }

        friend complex sumcomplex(complex o1, complex o2);

// properties of friend function
// 1.not in the scope of class(it can acess private data of class)
// 2.since its not iin scope of class it can't called from object of class
// 3.can be invoked without the help of object
// 4.useuall contains the objects as the arguments
// 5. it can written in public or private part of class
// 6.it can't be acessed the members  directly by their names and need objects name,member_name to acess any member
       
       
        void printnumber()
        {
            cout<<"your number is"<<a<<"+"<<b<<"i"<<endl;
        }
};

complex sumcomplex(complex o1,complex o2)
{
    complex o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main()
{
    complex o1,o2,sum;
    o1.setnumber(1,2);
    o1.printnumber();

    o2.setnumber(3,4);
    o2.printnumber();

    sum=sumcomplex(o1,o2);
    sum.printnumber();
    return 0;
}