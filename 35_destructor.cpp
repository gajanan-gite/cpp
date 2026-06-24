#include <iostream>
using namespace std;

/* destructor never takes an argument
and never return value */
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "this is time when constructor is called for object number"
             << count << endl;
    }
    ~num()
    {

        cout << "this is time when destructor is called for object number"
             << count << endl;
        count--;
    }
};
int main()
{   
    cout<<"we are in main function"<<endl;
    cout<<"creating a object n1"<<endl;
    num n1;
    {
        cout<<"entering this block"<<endl;
        cout<<"creating two more objects"<<endl;
        num n2,n3;
        cout<<"exiting this block"<<endl;
    }
    cout<<"back to the main"<<endl;
    return 0;
}