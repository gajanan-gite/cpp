#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void Student::set_roll_number(int r)
{
    roll_number = r;
}
void Student::get_roll_number(void)
{
    cout << "the roll no. is " << roll_number << endl;
}
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam::get_marks(void)
{
    cout << "marks obtained in maths are " << maths << endl;
    cout << "marks obtained in physics are " << physics << endl;
}

class result : public Exam
{
public:
    float percentage;
    void display()
    {
        get_roll_number();
        get_marks();
        cout << "your percentage is " << (maths + physics) / 2 << endl;
    }
};
int main()

{
    result gaju;
    gaju.set_roll_number(300);
    gaju.set_marks(100, 50);
    gaju.display();
    return 0;
}