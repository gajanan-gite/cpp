#include<iostream>
using namespace std;
/*
syntax for initialization list in constructor:
constructor (arguments -list):initialization section
{
assignment +other code;
}
class test{
    int a;
    int b;
    public:
        test(int i,int j):a(i),b(j){constructor body}
}
*/
class test{
    int a;
    int b;
    public:
        // test(int i,int j):a(i),b(j)
        // test(int i,int j):a(i),b(j+i)
        // test(int i,int j):a(i),b(j+i)
        // test(int i,int j):a(i),b(a+j)
        // test(int i,int j):b(j),a(i+b)--->This will ceate problem 
        //                         because a will be initialized first
        // test(int i,int j):b(j),a(i+b) // if b is writtn first then it will run
        test(int i,int j):a(i)

        {   b=j;
            cout<<"constructor exicuted"<<endl;
            cout<<"value of a is "<<a<<endl;
            cout<<"value of b is "<<b<<endl;
        }
};
int main()
{test harry(1,2);
return 0;
}