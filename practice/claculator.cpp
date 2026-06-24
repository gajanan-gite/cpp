#include<iostream>
using namespace std;



int main()
{  
    // float a,b;
    int a,b;
    int ch;
cout<<"enter a and b"<<endl;
cin>>a>>b;
cout<<"enter your choice "<<endl;
cin>>ch;

    switch (ch)
    {
    case 1:
        int sum;
        sum=a+b;
        cout<<sum;
        return sum;
        
        break;
    
    case 2:
        int sub;
        sub=a-b;
        cout<<sub;
        return sub;
        break;
    
    case 3:
        int mul;
        mul=a*b;
        cout<<mul;
        return mul;
        break;
    
    case 4:
        int div;
    
        
        div=(a/b);
        if(a<b){
           
            cout<<"less than 1";
        }
        cout<<div;
        return div;
        
    }
    
return 0;
}