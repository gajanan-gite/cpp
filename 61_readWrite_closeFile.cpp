/*
read operation
ifstream in("this.txt");
string st;
in>>st; //just like Cin

write operation
ofstream out(this.txt);
string st="harry";
out<<st; //write to a file this..

*/
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //connecting our file with out stream
    ofstream out("60a_sample.txt");
    //creating a name string and fill it with the string entered by the user
    cout<<"enter your name";
    string name;
    cin>>name;
    //writing string to this file
    out<<"my name is "+name;
    out.close();

    ifstream in("60a_sample.txt");
    string content;
    getline(in,content);
    in>>content;
    cout<<"content of this file is "<<content;
    in.close();

return 0;
}