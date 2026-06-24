#include<iostream>
using namespace std;
class employee{
    int id;
    int salary;
    public:
    void setid(void){
        salary=122;
        cout<<"enter id"<<endl;
        cin>>id;
    }
    void getid(void){
        cout<<"id of employee "<<id<<endl;
    }
};
int main()
{
    // employee e1,e2,e3;
    // e1.setid();
    // e1.getid();

    employee fb[100];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }
    
    

return 0;
}