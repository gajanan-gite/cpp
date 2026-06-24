#include<iostream>
using namespace std;

class complex{
    int real,imaginary;
    public:
    void getdata(){
        cout<<"the real part is "<<real<<endl;
        cout<<"the imainary part is "<<imaginary<<endl;
    }
    void setdata(int a,int b){
        real=a;
        imaginary=b;
    }
};
int main()
{   
    // complex c1;
    // complex *ptr=&c1;
    complex *ptr =new complex;
    // (*ptr).setdata(4,5); is exacty same as
    ptr->setdata(4,5);
    // (*ptr).getdata(); is as good as
    ptr->getdata();

    //array of objects 
    complex *ptr1 =new complex[4];
    ptr1->setdata(4,5);
    ptr1->getdata();
return 0;
}