#include<iostream>
using namespace std;
/*
case1
class b:public a{
//order of executoion of constructor--.a then b
};

case2
class b:public a,public c{
//order of executoion of constructor--.a then c tnen  b
};

case3
class b:public a,virtual public c{
//order of executoion of constructor--.c then a then b
};

*/
class Base1{
    int data1;
    public:
    Base1(int i){
        data1 =i;
        cout<<"base1 class consructor called "<<endl;
    }
    void printdatabase1(){
        cout<<"the value of dat is "<<data1<<endl;
    }
};
class Base2{
    int data2;
    public:
    Base2(int i){
        data2 =i;
        cout<<"base2 class consructor called "<<endl;
    }
    void printdatabase2(){
        cout<<"the value of dat is "<<data2<<endl;
    }
};
class derived:public Base1,public Base2{
    int derived1,derived2;
    public:
        derived(int a,int b,int c,int d):Base1(a),Base2(b){
           derived1=c;
           derived2=d;
           cout<<"derived class constructor is called"<<endl;
        }
        void printdataderived(){
            cout<<"the value of derived1 and derived2 is "<<derived1<<endl<<derived2<<endl;
        }

};
int main()
{
    derived harry(1,2,3,4);
    harry.printdatabase1();
    harry.printdatabase2();
    harry.printdataderived();
return 0;
}