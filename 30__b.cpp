#include<iostream>
using namespace std;

class point{
    int x,y;
    public:
        point(int a,int b){
            x=a;
            y=b;
        }
        void displaypoint(){
            cout<<"the point is ("<<x<<" "<<y<<")"<<endl;
        }
};
/* Creat a function(hint: make it a friend function)that takes two points 
objects and computes the distance between those point */
int main()
{   point p(1,1);
p.displaypoint();

point q(4,6);
q.displaypoint();

    return 0;
}