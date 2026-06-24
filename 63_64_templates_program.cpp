// template for compitative progamming....
/*
Templates
class->object
template->class

Templates = parametarized classes
template follows dry  principle
generic programming

class vector{
int *arr;
int size;
public:

}

//syntax of template:
template<class T>
class vector{
    T *arr;  
    public:
        vector(T *arr)
            {
            //code
            }
            //and many methods
        }
    //T can be int, float,char etc..
    int main(){
    vector<int>myVec(ptr);
    vector<float>myfVec(ptr);
    }
*/
#include<iostream>
using namespace std;

template<class T>
class Vector{
    public:

    T * arr;
    int size;
        Vector(int m){
            size=m;
            arr=new T[size];
        } 
        T dotProduct(Vector &v){
            T d=0;
            for (int i = 0; i < size; i++)
            {
                d+=this->arr[i]*v.arr[i];
            }
            return d;
            
            
        }
};
int main(){
    // Vector v1(3);
    // v1.arr[0]=4;
    // v1.arr[1]=1;
    // v1.arr[2]=2;
    // Vector v2(3);
    // v2.arr[0]=1;
    // v2.arr[1]=0;
    // v2.arr[2]=3;
    // int a=v1.dotProduct(v2);
    // cout<<a<<endl;

    Vector<float> v1(3);
    v1.arr[0]=4.0;
    v1.arr[1]=1.5;
    v1.arr[2]=2.5;
    Vector<float>v2(3);
    v2.arr[0]=1.4;
    v2.arr[1]=0.5;
    v2.arr[2]=3.6;
    float a=v1.dotProduct(v2);
    cout<<a<<endl;
return 0;
}