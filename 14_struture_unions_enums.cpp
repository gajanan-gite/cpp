#include<iostream>
using namespace std;

// struct:user defined data type for combile many data types

// typedef struct employee
// {
//     /* data */
//     int eId;//4
//     char favChar;//1
//     float salary;//4
// }ep;

//union :provides memoery managements, optimisea the memory

// union money
// {
//     /* data */
//     int rice;//4
//     char car;//1
//     float pounds;//4
// };

int main(){

    enum Meal{ breakfast,lunch, dinner};
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;

    Meal m1 =lunch;
    cout<<(m1==2);



    // union money m1;
    // m1.rice=34;
    // // m1.car='c';
    // cout<<m1.car;

    // ep harry;
    // struct employee aadi;
    // struct employee gaju;

    // harry.eId=1;
    // harry.favChar='c';
    // harry.salary=120000000;

    // cout<<"the value is "<<harry.eId<<endl;
    // cout<<"the value is "<<harry.favChar<<endl;
    // cout<<"the value is "<<harry.salary<<endl;

return 0;

}