#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    /*int a=34;
    char c='c';

     cout<<"the value of a was "<<a<<endl;
     cout<<"the value of c was "<<c<<endl;
    a=45;
    c='4';
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of c is "<<c<<endl;


    //**************************CONSTANTS IN C++*****************************
    
    //shuru me he const declare kar dete hai taki galti se bhi change na ho paye
    //jaise uppar a aur c ki value change ho gayi hai waise ham b ki nahi kar payenge abb, usme error aayega

   */
    const int b=3;
    cout<<"the value of b is "<<b<<endl;
   

   //**********************MANIPULATORS IN C++********************
   int a=3, b=78, c=1233;

   cout<<"the value of a without setw is "<<a<<endl;
   cout<<"the value of b without setw is "<<b<<endl;
   cout<<"the value of c without setw is "<<c<<endl;
    cout<<"the value of a with setw is "<<setw(4)<<a<<endl;//is se output ko align kar sakte hai
    cout<<"the value of b with setw is "<<setw(4)<<b<<endl;
    cout<<"the value of c with setw is "<<setw(4)<<c<<endl;

//********************OPERATOR PRECEDENCE*************************
    int a=3, b=4;
    int c= ((((a*5)+b)-45)+87);    
    cout<<c;

    return 0;
}