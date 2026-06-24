#include<iostream>
using namespace std;

class number{
    int a;
    public:
        number(){ 
            a=0;
        }
        number(int num){
            a=num;
        }

        // complie provides the copy constructor i f we didend write in progrm

        number(number &obj){
            cout<<"copy construtor called "<<endl;
            a=obj.a;
        }
        void display(){
            cout<<"the number for this object is "<<a<<endl;
        }
};
int main()
{   
    number x,y,z(45),z2;
    z.display();
    y.display();
    x.display();

    // z1 should exactly resemble the z
    number z1(x);//copy constructor invoked
    z1.display();
    z2=z;//copy constructor not invoked becz object is allready created
    z2.display();
    number z3=z;//copy consructor invoked
    z3.display();

return 0;
} 