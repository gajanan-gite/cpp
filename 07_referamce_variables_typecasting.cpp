#include<iostream>
using namespace std;

int c=45;

int main(){
    // int a,b,c;

    //******   BUILT In DATATYPES        */
    
    // cout<<"value a";
    // cin>>a;
    // cout<<"value b";
    // cin>>b;
    // c=a+b;
    // cout<<"sum is"<<c<<endl;
    // cout<<"global sum is"<<::c;

    //****   FLOAT, DOUBLE AND LONG DOUBLE litrals  */

    // float d=34.4f;
    // long double e=34.4l;
    // cout<<"the size of 34.4 is"<<sizeof(34.4)<<endl;
    // cout<<"the size of 34.4 is"<<sizeof(34.4f)<<endl;
    // cout<<"the size of 34.4 is"<<sizeof(34.4F)<<endl;
    // cout<<"the size of 34.4 is"<<sizeof(34.4l)<<endl;
    // cout<<"the size of 34.4 is"<<sizeof(34.4L)<<endl;
    
    
    // 34.4f;
    // cout<<"the value of d is"<<d<<endl<<"the value of e is"<<e;

    //*******   REFERANCE VARIABLES     ******* */
    
    // Rohan--->Monty--->Rohu--->dangerance Coder
   
   //******TYPE CASTING**** 
   int a=45;
   float b=45.45;
   cout<<"the value of a is"<<(float)a<<endl;

   cout<<"the value of b is"<<(int)b<<endl;
   cout<<"the value of b is"<<int(b)<<endl;

   int c=int(b);
   cout<<"the expression is"<<a+b<<endl;
   cout<<"the expression is"<<a+int(b)<<endl;
   cout<<"the expression is"<<a+(int)b<<endl;




     
    

    return 0;

}