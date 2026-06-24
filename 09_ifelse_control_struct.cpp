
// BASIC CONTROL STRUCT
  
// 1.sequence strcture

// entry-->action 1-->acion2-->exit

// 2.selection structurs
// entry--->condition--->true--->action1-->exit
//                   --->false-->action2-->exit

// 3.loop structure
// entry--->condi--->true--->action--->entry
// in this loop aayega 


//1.if else statements
// syntax:

// int i=0;
// if(i<3){
//     cout<<i;
//     i++:
// }


// 2.if else ladder



// 3.swich case
// syntax:

//  switch(expression){
//     case 1 :
//     {
//         action1;
//     }
//     default:
//     {action2;
//     }

//  }

#include<iostream>
using namespace std;
 
int main()

{
// selection control structre: if else else ladder

 int age;
cout<<"tell me your age"<<endl;
cin>>age;
//  if((age<18) && (age>0)){
//     cout<<"you can not come to my party"<<endl;

//  }
//  else if(age==18){
//     cout<<"you can get in"<<endl;
//  }
//  else if(age<1){
//         cout<<"you are not born"<<endl;
//     }

 
//  else{
//     cout<<"you can get kid pass"<<endl;

//  }

// selection control structre: switch case
switch (age)
{
case 18:
    
    cout<<"you are 18";
    break;
case 22:
    
    cout<<"you are 22";
    break;
case 2:
    
    cout<<"you are 2";
    break;


default:
cout<<"no special case";
    break;
}


return 0;

}