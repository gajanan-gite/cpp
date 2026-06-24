/*
A--->b---->d
 --->c---->d
 here A is virtual base class of b and c
 */

 /*
 student--->test---->result
 student--->sport---->result
 */
#include<iostream>
using namespace std;

class student{
    int roll_no;
    public:
    void set_number(int a){
        roll_no=a;
    }
    void print_number(void){
        cout<<"your roll no is "<<roll_no<<endl;
    }
};
class test: virtual public student{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float m1,float m2){
    maths =m1;
    physics=m2;
}
    void print_marks(){
        cout<<"your result is here :"<<endl
            <<"maths "<<maths<<endl
            <<"physics "<<physics<<endl;
    }
};

class sport:virtual public student{
    protected:
        float score;
        public:
        void set_score(float sc){
            score=sc;
        
        }
        void print_score(void){
            cout<<"your PT score is "<<score<<endl;
        }
};
class Result:public test,public sport{
    private:
    float total;
    public:
    void display(void){
        total = maths+physics+score;
        print_number();
        print_marks();
        print_score();
    cout<<"yout total score is :"<<total<<endl;

    }
  
};
int main()
{
    Result harry;
    harry.set_number(10);
    harry.set_marks(45,49);
    harry.set_score(40);
    harry.display();
return 0;
}
