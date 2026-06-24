#include<iostream>
using namespace std;

  inline int product(int a,int b){
    return a*b;
    }


// when to use inline: when function is very small
// inline saves the time when function is repeated.

// when recurstion and static variable then dont use inline function

// int product(int a,int b){
//   static int c=0;//this execute only once
//   c=c+1;// next time function runs the value of c will retain
//   return a*b+c;
// }

float moneyReceived(int currentmoney, float factor=1.04){
  return currentmoney*factor;


// comstant argument....
// int strlen(const char*p){

// }


}
int main(){
    int a,b;
    // cout<<"enter values of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"product is"<<product(a,b)<<endl;

    int money=10000;
    cout<<"if u have"<<money<<"rs in bank ,u will received"<<moneyReceived(money)<<"rsafter 1 year"<<endl;
    cout<<"for VIP:if u have"<<money<<"rs in bank ,u will received"<<moneyReceived(money, 1.1)<<"rsafter 1 year"<<endl;

    
   
    
 
  return 0;

}