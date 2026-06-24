//header files
//1.systeam header files
#include<iostream>
//2 user defind header files
#include"06_this.h"// this will give error if not presnt in current directory

using namespace std;
int main()
{
    cout<<"gaju";
    //operators in c++
    //following are types of operator
    //arithematic operators
    int a=4,b=8;
    cout<<"sum"<<a+b;
    cout<<"valvue of a++"<<a++<<endl;
    cout<<"valvue of a--"<<a--<<endl;
    cout<<"valvue of ++a"<<++a<<endl;
    cout<<"valvue of --a"<<--a<<endl;

    //assingement operators:used to assign valuses to variables

    //int a=3,b=4;
    //char d='d';


    // comparision operator
    //for comparision
    //folloig are  comparision operators

    cout<<"the valuve of a==b is"<<(a==b)<<endl;
    cout<<"the valuve of a!=b is"<<(a!=b)<<endl;
    cout<<"the valuve of a>=b is"<<(a>=b)<<endl;
    cout<<"the valuve of a=<=b is"<<(a<=b)<<endl;
    cout<<"the valuve of a>b is"<<(a>b)<<endl;
    cout<<"the valuve of a<b is"<<(a<b)<<endl;
    cout<<"the valuve of a==b is"<<(a==b)<<endl;



    //logical operators
    //followigs are logical operators
    cout<<"the valuve of this logical operator((a==)&& (a<b))is "<<((a==b) && (a<b));

    //bitwise operator
    //badme dekhege.............

    
    return 0;
}