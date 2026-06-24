#include<iostream>
using namespace std;

class Base{
    protected:
    int a;
    private:
    int b;
};
/*for protected member
             public derivation   private     protected
1.private :  not inherited        not        not
2.protected: protected           private     protected
3.public :   public              private     protected

 */
class Derived:protected Base{
   
};
int main()
{
    Base b;
    Derived d;
    // cout<<d.a; will not work since a is protected in both class
    
return 0;
}