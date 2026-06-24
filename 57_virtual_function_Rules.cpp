#include<iostream>
#include<string.h>
using namespace std;

class CWH{
     protected:
     string title;
     float rating;
     public:
     CWH(string s,float r){
        title =s;
        rating=r ;
     }
     virtual void display(){}

};
class CWHvideo:public CWH{
    int videolength;
    public:
    CWHvideo(string s,float r,int vl):CWH(s,r){
        videolength=vl;
    }
    void display(){
        cout<<"this is amazing video with title"<<title<<endl;
        cout<<"rating "<<rating<<" out of 5 stars"<<endl;
        cout<<"length of video is "<<videolength<<" minutes"<<endl;
    }
};
class CWHtext:public CWH{
    int words;
    public:
    CWHtext(string s,float r,int wc):CWH(s,r){
        words=wc;}
        void display(){
        cout<<"this is amazing text tutorial with title "<<title<<endl;
        cout<<"rating of this text tutorial "<<rating<<" out of 5 stars"<<endl;
        cout<<"no of words in tutorial "<<words<<" words"<<endl;
    }
    
};
int main(){
    string title;
    float rating,vlen;
    int words;

    //for code with harry video
    title=" django tutorial";
    vlen=4.56;
    rating=4.5;
    CWHvideo djvideo(title,rating,vlen);
    //djvideo.display();

    //for code with harry vtext
    title=" django tutorial text";
    words=400;
    rating=4.5;
    CWHtext djtext(title,rating,words);
    // djtext.display();

    CWH* tut[2];
    tut[1]=&djvideo;    
    tut[0]=&djtext;   
    
    tut[1]->display();
    tut[0]->display();
return 0;
}

//rules for virtual functions
// 1.they can not be static
// 2.they are acessed by object pointer
// 3.virtual function can be friend function of another class
// 4.a virtual function in base class might not be used.
// 5.if a virtual function defined in base class there is no necessity 
//   of redefining it in the derived class
 
