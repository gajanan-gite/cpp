#include<iostream>
using namespace std;

// ### factorial
// int factorial(int n){
//     if (n<=1){
//         return 1;
//     }
//     return n*factorial(n-1);
// }

// step by step calculation
// factorial(4)=4*factorial(3);
// factorial(4)=4*3*factorial(2);
// factorial(4)=4*3*2*factorial(1);
// factorial(4)=4*3*2*1;
// factorial(4)=24;


//###  fibonacci
int fib(int n){
    if(n<=2){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    // factorial of a no.
    // 6!=6*5*4*3*2*1=720
    // 0!=1
    // 1!=1
    // n=n*(n-1)!
    int a;
    cout<<"enter no."<<endl;
    cin>>a;
    // cout<<"factorial of a is  "<<factorial(a)<<endl;
   
    cout<<"the nth term of fibonacci  is  "<<fib(a)<<endl;
 
    return 0;
}