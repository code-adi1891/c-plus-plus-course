#include<iostream>

using namespace std;

int main(){
    int a=3;
    int* b = &a; //int* is a pointer variable jiska name 'b' hai, which is equal to the address of 'a'
   
   
    // & ---> (Address of) Operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;//dirf 'b' matlab address of 'a' kyuki star nahi lagaya. 

    // * ---> (value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;//*b matlab 'b' ke andar kon si value hai..('a' hai in this case)

    //Pointer to pointer
    int**c=&b;
    cout<<"the address of b is "<<&b<<endl;  
    cout<<"the address of b is "<<c<<endl;

    cout<<"the value at address c is"<<*c<<endl;
    cout<<"the value at(the value at (the value of c))"<<**c<<endl;
    
    return 0;
}