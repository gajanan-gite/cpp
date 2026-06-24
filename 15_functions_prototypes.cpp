#include<iostream>
using namespace std;


// function prototype
// type functin_name(argument);
// int sum(int a , int b);  aceptable
// int sum(int a , b); not aceptable
// int sum(int ,int); // aceptable
// void g(void); aceptable
// void g();  aceptable





    int sum(int a , int b){
    int c = a + b;
    return c;
    // num1 and num2 are actual parameters
    // a and b are formal parameters they are taking values form actual parameters
    
    }


void g(){
    cout<<"hello"<<endl;
    }


int main(){
    int num1,num2;
    cout<<"enter num1"<<endl;
    cin>>num1;
    cout<<"enter num2"<<endl;
    cin>>num2;
    cout<<"sum is"<<sum(num1,num2);
    g();

 
return 0;

}