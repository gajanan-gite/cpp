#include<iostream>
#include<fstream>
/*
the useful classes for working with files in c++ are:
1.fstreambase
2.ifstream-->derived from fstreambase
3.ofstream-->derived from fstreambase

in order to work with files in c+++
you will have to open it. primarly there are 2 ways to open a file :
#1.using constructor
#2.using the member function open() of the class
*/
using namespace std;

int main(){
    string st="harry bhai";
    string st2;
    // opening file using constructor and writing it
    ofstream out("60a_sample.txt");//write operation
    out<<st;

    // //opening files using constructor and reading it
    // ifstream in("60b_sample.txt");//reading operation
    // // in>>st2;
    // getline(in,st2);
    // cout<<st2;

    return 0;
}