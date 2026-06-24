#include<iostream>
using namespace std;
/*
create 2 classes
1 simpleCalculator: takes inputs of 2  numbers using utility function +,-,*,/
and display result using another function.
2. ScientificCalculator: take inputs of 2 numbers using utility function
and performs any four scientific opertaion of your choise and results
using another function

3
create a object of hybridCalcultor and display result of 
simple and scientificCalculator result 
*/

/*
class SimpleCalc{
    float a, b;
    public:

    float add(){
    cout<<"enter a and b "<<endl;
    cin>>a>>b; 
    cout<<" the sum is " <<a+b<<endl;
    }
    float sub(){
        cout<<"enter a and b "<<endl;
        cin>>a>>b; 
        cout<<" the sum is " <<a-b<<endl;
    }
    float mul(){
            cout<<"enter a and b "<<endl;
            cin>>a>>b; 
            cout<<" the sum is " <<a*b<<endl;
    }
    float div(){
        cout<<"enter a and b "<<endl;
        cin>>a>>b; 
        cout<<" the sum is " <<a/b<<endl;
    }
    void display(){
        
    }

};
class ScifiCalc{
    
    public:
    float force(){
        int mass;
        cout<<"enter mass of object"<<endl;
        cin>>mass;
        int a=9.8;
        cout<<"the gravitation force on object"<< mass*a<<endl;
    }
    float speed(){
        int dist;
        int time;
        cout<<"enter dist of vehical"<<endl;
        cout<<dist;
        cout<<"enter time of traval of vehical"<<endl;
        cin>>time;
        
        cout<<"the speed of vehical"<<(dist/time)<<endl;
    }
    float sin(){
        float hypotence,base,height;
        cout<<"enter hypotence,base and height"<<endl;
        cin>>hypotence>>base>>height;
        
        cout<<"the sin of angle is "<<height/hypotence <<endl;
    }
    float cos(){
        float hypotence,base,height;
        cout<<"enter hypotence,base and height"<<endl;
        cin>>hypotence>>base>>height;
        
        cout<<"the cos of angle is "<<base/hypotence <<endl;
    }


};

class HybridCalc:public SimpleCalc,public ScifiCalc{
    public:
    void display(){

    }

};

*/

// #### varcha maza chitiyapa ahe...
#include<cmath>

class SimpleCalculator{
    int a,b;
    public:
    void getdataSimple(){
        cout<<" enter the value of a "<<endl;
        cin>>a;
        cout<<" enter the value of b "<<endl;
        cin>>b;
    }
    void performoperationsimple(){
        cout<<"the value of sum is "<<a+b<<endl;
        cout<<"the value of sub is "<<a-b<<endl;
        cout<<"the value of mul is "<<a*b<<endl;
        cout<<"the value of div is "<<a/b<<endl;
    }
};

class ScientificCalculator{
    int a,b;
    public:
    void getdataScientific(){
        cout<<" enter the value of a "<<endl;
        cin>>b;
        cout<<" enter the value of b "<<endl;
        cin>>b;
    }
    void performoperationscientific(){
        cout<<"the value of sin(a) is "<<sin(a)<<endl;
        cout<<"the value of cos(a) is "<<cos(a)<<endl;
        cout<<"the value of tan(a) is "<<tan(a)<<endl;
        cout<<"the value of tan(b) is "<<tan(b)<<endl;
    }
};

class HybridCalculator:public SimpleCalculator,public ScientificCalculator{

};

int main()
{   
HybridCalculator calc;
calc.getdataSimple();
calc.performoperationsimple();

return 0;
}