#include<iostream>
using namespace std;

class employee{
   
    public:
    int id;
    float salary;
    
    employee(int inpid){
        id=inpid;
        salary=34;
    }
    employee(){}
};

// // derived class
// class{{derived-class-name}}:{{visibility-mode}}{{base-class-name}}
// {
//     class members/methods/etc...
// }
/*
notes 
1.default visibility mode is private
2.public visibility mode: public members of a class
 become public members of derived class
3.private visibility mode: public members of a class 
become private members of derived class
4.private members are never inherited
*/

class gaju:public employee
{   
    
    
    public:
    int languagecode;
    
    gaju(int inpid){
        id =inpid;
         languagecode=9;
    }
    
    void getdata()
    {cout<<id<<endl;
    };
};

int main()
{
    employee harry(1),rohan(0);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    gaju skillF(10);
    cout<<skillF.languagecode<<endl;
    cout<<skillF.id<<endl;
    skillF.getdata();
return 0;
}