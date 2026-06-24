#include<iostream>
using namespace std;

class shopitem{
    int id;
    float price;
    public:
    void setdata(int a,float b){
        id=a;
        price=b;
    }
    void getadata(){
        cout<<"code of item is"<<id<<endl;
        
        cout<<"price of item is"<<price<<endl;
        
    }
};
int main()
{   
    // 1 2 3
    //     ^
    //     |
    //     |
    //     ptr
    // ptrTemp

    int size=3;
    // int *ptr=&size;
    // int *ptr=new int [34];
    // general strore item
    // veggies item
    // hardware item
    shopitem *ptr=new shopitem[size];
    shopitem *ptrTemp = ptr;

    int p,i;
    float q;
    for( i=0;i<size; i++){

        cout<<"enter id and price of item "<<i+1<<endl;
        cin>>p>>q;
        // (*ptr).setadata(p,q);
        ptr->setdata(p,q);
        ptr++;
    }
    for ( i = 0; i < size; i++)
    {
        cout<<"item number :"<<i+1<<endl;
        ptrTemp->getadata();
        ptrTemp++;

    }
    
return 0;
}