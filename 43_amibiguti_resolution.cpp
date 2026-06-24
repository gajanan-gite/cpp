#include<iostream>
using namespace std;

class Base1{
public:
    void greet(){
        cout<<"how are you"<<endl;
    }
};
class Base2{
public:
    void greet(){
        cout<<"kaise ho ?"<<endl;
    }
};
class Base3:public Base1,public Base2{
public:
    void greet(){
        Base2::greet();
    }
};

class B{
    public:
    void say(){
        cout<<"hello"<<endl;
    }
};
class D:public B{
    public:
    void say(){
        cout<<"hello baby"<<endl;
    }
};
int main()

{//   Ambiguity
    // Base1 base1obj;
    // Base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();
    // Base3 d;
    // d.greet();
    D d;
    d.say();  //ambiguity resolved automatically

return 0;
}