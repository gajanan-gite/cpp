#include<iostream>
using namespace std;
#include<iomanip>

int main(){
    // int a=34;
    // char c='c';

    // cout<<"value of a was";

    // a=45;
    // c='4'
    // cout<<"the value of a is";

    // *********Constants in c+++

    // const int a=3;
    // cout<<"a was"<<a<<endl;
    // a=45;
    // cout<<"vale of a"<<a<<endl;

    //*****  Manupulatores
    // helps for formating \n,\t,endl 
    // use of header file "iomanip"
    
    // int a=1,b=23,c=3333;
    // cout<<"the valu of a is"<<a<<endl;
    // cout<<"the valu of b is"<<b<<endl;
    // cout<<"the valu of c is"<<c<<endl;

    // cout<<"the valu of a is"<<setw(4)<<a<<endl;
    // cout<<"the valu of b is"<<setw(4)<<b<<endl;
    // cout<<"the valu of c is"<<setw(4)<<c<<endl;

    //**********Operator Precedence 

    int a=3,b=4;
    int c = (a*5)+b;
    int d=(((a*5)+b-45)+50);


    cout<<c<<endl;
    cout<<d;

    return  0;
}