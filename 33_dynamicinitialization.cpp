#include<iostream>
using namespace std;

class bankdeposite{
    int principal;
    int years;
    float interestrate;
    int returnvalue;

    public:
    bankdeposite(){}
    bankdeposite(int p,int y,float r);//r is like 0.04

    bankdeposite(int p,int y,int r);//r is like 14
    void show();



};

bankdeposite::bankdeposite(int p,int y,float r)
{
    principal=p;
    years=y;
    interestrate=r;
    returnvalue=principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue=returnvalue*(1+r);
    }
}
bankdeposite::bankdeposite(int p,int y,int r)
{
    principal=p;
    years=y;
    interestrate=float(r)/100;
    returnvalue=principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue=returnvalue*(1+interestrate);
    }
}

void bankdeposite::show(){
    cout<<endl<<"principal amount "<<principal<<endl<<
    "interest rate "<<interestrate<<endl<<"years "<<years<<endl
    <<"returnvalue "<<returnvalue<<endl;
}
    
int main()
{   
    bankdeposite bd1,bd2,bd3;
    int p,y;
    float r;
    int R;

    bd3.show();
    cout<<"enter the value of p, y and r"<<endl;
    cin>>p>>y>>r;
    bd1=bankdeposite(p,y,r);
    bd1.show();

    cout<<"enter the value of p, y and R"<<endl;
    cin>>p>>y>>R;
    bd2=bankdeposite(p,y,R);
    bd2.show();

    return 0;
}