
/* Creat a function(hint: make it a friend function)that takes two points 
objects and computes the distance between those point */

#include<iostream>
#include<math.h>
using namespace std;

class point{
    int x,y;
    public:
        friend void distance(point o1, point o2);

        point(int a,int b){
            x=a;
            y=b;
        }
        void displaypoint(){
            cout<<"the point is ("<<x<<" "<<y<<")"<<endl;
        }
};

void distance(point o1, point o2)
{
    float dist;
    dist=sqrt(pow(o2.x-o1.x,2)+pow(o2.y-o1.y,2));
    cout<<dist<<endl;

}
int main(){
    point p(1,1);
    p.displaypoint();

    point q(4,6);
    q.displaypoint();

    distance(p,q);

    return 0;
}