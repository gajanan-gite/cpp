#include<iostream>
using namespace std;

class employee{
    int id;
    static int count;
    // count is static data member
    // static when we use it its property of class
    // shares the count
    // start from 0
    // stastic member fuction is used to acess all static variables
    public:
        void setdata(void){
            cout<<"enter id of employee "<<endl;
            cin>>id;
            count++;
        }
        void getdata(void){
            cout<<"the id of employee is "<<id<<" and this is employee "<<count<<endl;
        }
        static void getcount(void){
            // cout<<id;//give an error
            cout<<"the value of count is"<<count<<endl;
        }
};


int employee:: count;//defaualt value is 0
int main()
{
    employee e1,e2,e3;
    e1.setdata();
    e1.getdata();
    employee::getcount();

    e2.setdata();
    e2.getdata();
    employee::getcount();


    e3.setdata();
    e3.getdata();
    employee::getcount();

    return 0;
}