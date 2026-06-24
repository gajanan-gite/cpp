// member function template and overloading template function

#include<iostream>
using namespace std;
template<class T>
class harry{
    public:
    T data;
    harry(T a){
        data=a;
    }
    void display();

};
template<class T>
void harry<T>:: display(){
    cout<<data;
}
void func(int a){
    cout<<"i am first func() "<<a<<endl;
}

template<class T>
void func(T a){
    cout<<"i am templatized func() "<<a<<endl;
}




int main(){
    // harry<int> h(6);
    // cout<<h.data<<endl;
    // h.display();

    func(4);//exact match takes the higher prioity
    
    
return 0;
}