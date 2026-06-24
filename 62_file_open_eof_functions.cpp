#include<iostream>
#include<fstream>
// #include<string>
using namespace std;

int main(){
    ofstream out;
    out.open("60a_sample.txt");
    out<<"this is me\n";
    out<<"this is we\n";
    out<<"this is you\n";
    out<<"this is us\n";
    out.close();

    ifstream in;
    string st;
    in.open("60b_sample.txt");
    // cin>>st;
    // getline(in,st);
    // cout<<st;
    while (in.eof()==0){
        getline(in,st);
        cout<<st<<endl;
        }
    in.close();
return 0;
}