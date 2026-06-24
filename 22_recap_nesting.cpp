    //OOP classes and objects
    // c++ initially called c with classes
    // classes is extention of structures
    // strutures had limitations
    //           members are public
    //           no methods
    // classes are structure + more
    //  classes have methods and properties
    // classes can make few members as private and few as public
    
    // structure are in c++ are typedefed

    // you can declare objects with the class declaration like this

    /* class employee
    {
        //class defination
    } 
    harry, rohan, */

    // harry.salary= it makes no sence if salary is private

    // nesting of member fuction


#include<iostream>
using namespace std;


class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void onescomp(void);
    void display(void);
};

void binary:: read(void){
    cout<<"enter a binary number"<<endl;
    cin>>s; 
}
void binary:: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"incorrect binary format"<<endl;
            exit(0);

        }
    }
    
}
void binary:: onescomp(void){
    chk_bin();      //nesting of member function
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
    

}
void binary:: display(void){
    cout<<"display your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    
}
int main()
{

    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.onescomp();
    b.display();

return 0;
}