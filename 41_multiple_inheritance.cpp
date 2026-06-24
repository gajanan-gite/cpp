#include<iostream>
using namespace std;

/*
syntax for multiple inhertance
class DeriverdC : visibility-mode base1,visibilitym-mode base2
{
class body of class DerivedC
};
*/

class Base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int=a;
    }

};
class Base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a){
        base2int=a;
    }

};

class Derived :public Base1,public Base2
{
    public:
    void show(){
    cout<<"the value of base 1 is "<<base1int<<endl;
    cout<<"the value of base 2 is "<<base2int<<endl;
    cout<<"the sum of base1 and base2 is "<<base1int+base2int<<endl;
    }
};
// // in inverited derived class
// base1int --->protected
// base2int--->protected

int main()

{   Derived harry;
    harry.set_base1int(10);
    harry.set_base2int(20);
    harry.show();

    return 0;
}