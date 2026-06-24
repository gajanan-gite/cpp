#include<iostream>
using namespace std;

int main()
{
// **  ARRAY  **
// array--> colletion of items of similar types stored i contiguous manner in memory location
int marks[4]={23,25,45,40};

// int mathMark[4];
// mathMark[0]=233;
// mathMark[1]=236;
// mathMark[2]=237;
// mathMark[3]=239;
// cout<<"these are math marks"<<endl;
// cout<<mathMark[0]<<endl;
// cout<<mathMark[1]<<endl;
// cout<<mathMark[2]<<endl;
// cout<<mathMark[3]<<endl;

// you can chane the marks
marks[2]=00;
cout<<"these are  marks"<<endl;
cout<<"the vale of 0 is "<<marks[0]<<endl;
cout<<"the vale of 1 is "<<marks[1]<<endl;
cout<<"the vale of 2 is "<<marks[2]<<endl;
cout<<"the vale of 3 is "<<marks[3]<<endl;

// By usinf for loop

// for (int i = 0; i < 4; i++)
// {
//     cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    
// }

// ##### quiz ; do same using while loop and do while loop

// by while
// int i=0;
// while (i<4)
// {
//     cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
//     i++;
// }

// by do while
// int i=0;
// do
// {
//     cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
//     i++;
// } while (i<4);

// pointer arithematic
// address new =address current + i * size

// pointers and array
int* p=marks;
cout<<*(p++)<<endl;
cout<<*(++p)<<endl;

// cout<<" the value of *p is"<<*p<<endl;
// cout<<" the value of *(p+1) is"<<*(p+1)<<endl;
// cout<<" the value of *(p+2) is"<<*(p+2)<<endl;
// cout<<" the value of *(p+3) is"<<*(p+3)<<endl;
 
return 0;

}