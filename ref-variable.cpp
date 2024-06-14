#include<iostream>

using namespace std;

int c=45;
int main(){
    int a,b,c;

    //*********************************BUILD IN DATA TYPES*************************************
    // cout<<"enter the valur of a :"<<endl;
    // cin>>a;
    //  cout<<"enter the valur of b :"<<endl;
    // cin>>b;
    // c=a+b;
    // cout<<"the sum is"<<c;
    // cout<<"the global value of c is"<<::c; //scope resolution operator is used to get the global value of variable


    //*********************************FLOAT, DOUBLE AND LONG DOUBLE LITERALS*************************************

    // float d=34.4f;
    // long double e=34.4;
    // cout<<"the size of 34.4 is "<<sizeof(34.4)  <<endl;
    // cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"the size of 34.4L is "<<sizeof(34.4L)<<endl;
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;


    //*********************************REFERENCE VARIABLES*************************************
    // float x=455;
    // float & y=x;
    // cout<<x<<endl;
    // cout<<y<<endl;

        //*********************************TYPECASTING*************************************
        int r=45;
        float i=34.69;
        cout<<"the value of float r is "<<(float)r<<endl; //int(b) aur (int)b dono same hai, same work karte hai.
        cout<<"the value of int r is "<<(int)r<<endl;
        cout<<"the value of float i is "<<(float)i<<endl;
        cout<<"the value of int i is "<<(int)i<<endl;

        int s= int (i); //issey i ki integer value jo 34 hai wo c ki value ho jayegi.
        cout<<"the expression is "<<r+i<<endl;
        cout<<"the expression is "<<r+(int)i<<endl;
        cout<<"the expression is "<<r+int(i)<<endl;


    return 0;
}