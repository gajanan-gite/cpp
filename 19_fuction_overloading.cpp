#include<iostream>
using namespace std;

int add(int a,int b){
    cout<<"using function with 2 argu "<<endl;
    return a+b;
}


int add(int a,int b,int c){
    cout<<"using function with 3 argu "<<endl;

    return a+b+c;
}

int volume(double r,int h){
    return (3.14*r*h);
}

int volume(int a){
    return a*a*a;
}

int volume(int l,int h,int w){
    return l*h*w;
}

int main(){
    cout<<"sum of 3 and 6 is"<<add(3,6)<<endl;
    cout<<"sum of 3 and 6 and 7 is "<<add(3,6,7)<<endl;
    cout<<"volume of cylinder is "<<volume(3,6)<<endl;
    cout<<"volume of cube is "<<volume(3)<<endl;
    cout<<"volume of cuboid is "<<volume(3,4,5)<<endl;
 
return 0;

}